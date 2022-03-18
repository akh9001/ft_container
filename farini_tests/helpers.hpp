// MIT License
// 
// Copyright (c) 2021 Youness Farini
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// 
#pragma once
#include <iostream>
#include <limits>
#include <vector>
#include "vector.hpp"
#include <iomanip>
int max_to_fail = 9999;
#define DEBUG_ENABLE 0
struct test
{
    static int k;
    static int constructed_size;
    static int total_constr_size;
    int f;
    test() {if(DEBUG_ENABLE) std::cout << "Default Constructor\n"; k++; f = k;if (total_constr_size > max_to_fail) throw "LOL\n";constructed_size++;total_constr_size++;}
    test(int n){if(DEBUG_ENABLE) std::cout << "Default int Constructor\n"; k++; f = k;if (total_constr_size > max_to_fail) throw "LOL\n";constructed_size++;total_constr_size++;}
    test(test const& t){if(DEBUG_ENABLE) std::cout << "Copy Constructor\n"; f = t.f; if (total_constr_size > max_to_fail) throw "LOL\n";constructed_size++;total_constr_size++;}
    test&   operator=(test const&t){ if(DEBUG_ENABLE) std::cout << "Assignment\n";f = t.f; if (total_constr_size > max_to_fail) throw "LOL\n"; return *this;}
    bool   operator==(test const& t){ return this->f == t.f;}
    bool   operator!=(test const& t){ return this->f != t.f;}
    ~test() {if(DEBUG_ENABLE) std::cout << "Destructor\n"; constructed_size--;}
};

bool   operator==(test const& x, test const& t){ return x.f == t.f;}
bool   operator!=(test const& x, test const& t){ return x.f != t.f;}



template <typename Container>
std::ostream& operator<<(std::ostream& o, test const& vl)
{
    o << vl.f;
    return o;
}


template <class T, class Container> class myCustomAllocator;
template <class Container>
class myCustomAllocator<void, Container>
{
public:
    typedef void              value_type;
    typedef value_type*       pointer;
    typedef value_type const* const_pointer;
    typedef std::size_t       size_type;
    typedef std::ptrdiff_t    difference_type;
    template <class U>
    struct rebind
    {
        typedef myCustomAllocator<U, Container> other;
    };
};

template <class T, class Container>
class myCustomAllocator
{
public:
    typedef T                 value_type;
    typedef value_type&       reference;
    typedef value_type const& const_reference;
    typedef value_type*       pointer;
    typedef value_type const* const_pointer;
    typedef std::size_t       size_type;
    typedef std::ptrdiff_t    difference_type;
    static size_type _total_allocated_size ;
    static size_type allocated_size ;
    static size_type k;
     size_type f;
    static size_type construct_size ;
    template <class U>
    struct rebind
    {
        typedef myCustomAllocator<U, Container> other;
    };

    myCustomAllocator() throw() {}
    template <class U>
    myCustomAllocator(myCustomAllocator<U, Container> const& u) throw() {}

    pointer
    allocate(size_type n, typename myCustomAllocator<void, Container>::const_pointer = 0)
    {
        if(DEBUG_ENABLE) std::cout << "Allocate " << n << "\n";
        _total_allocated_size += n;
        allocated_size += n;
        return static_cast<pointer>(::operator new (n*sizeof(value_type)));
    }

    void
    deallocate(pointer p, size_type my_size)
    {
        if(DEBUG_ENABLE) std::cout << "deallocate " << my_size << "\n";
        allocated_size -= my_size;
        ::operator delete(p);
    }

    void
    construct(pointer p, value_type const& val)
    {

        construct_size++;
        ::new(p) value_type(val);
    }

    void
    destroy(pointer p)
    {
        construct_size--;
        p->~value_type();
    }

    size_type
    max_size() const throw()
    {
        return 5000000;
    }

    pointer
    address(reference x) const
    {
        return &x;
    }

    const_pointer
    address(const_reference x) const
    {
        return &x;
    }
};

template <class T, class ContainerT, class U, class ContainerU>
bool
operator==(myCustomAllocator<T,ContainerT> const&, myCustomAllocator<U,ContainerU> const&)
{
    return true;
}

template <class T, class ContainerT, class U, class ContainerU>
bool
operator!=(myCustomAllocator<T,ContainerT> const& x, myCustomAllocator<U,ContainerU> const& y)
{
    return !(x == y);
}

template <typename T, typename Container>
typename myCustomAllocator<T, Container>::size_type myCustomAllocator<T, Container>::construct_size = 0;
template <typename T, typename Container>
typename myCustomAllocator<T, Container>::size_type myCustomAllocator<T, Container>::allocated_size = 0;
template <typename T, typename Container>
typename myCustomAllocator<T, Container>::size_type myCustomAllocator<T, Container>::k = 0;
template <typename T, typename Container>
typename myCustomAllocator<T, Container>::size_type myCustomAllocator<T, Container>::_total_allocated_size = 0;

int test::k = 0;
int test::constructed_size = 0;
int test::total_constr_size = 0;

enum equality{
    EQUAL, //0000
    SIZE_DIFF, // 0001
    CONTENT_DIFF, // 010
    CAPACITY_DIFF = 4
};

template <typename T1, typename T2>
inline unsigned int check_equal(T1 const& stdV, T2 const& ftV)
{
    unsigned int res = 0;
    res |= (stdV.size() != ftV.size()) * SIZE_DIFF;
    res |= (stdV.capacity() != ftV.capacity()) * CAPACITY_DIFF;
    if (res & SIZE_DIFF)
        res |= CONTENT_DIFF;
    else {
        try
        {
           
            for (size_t x = 0; x < stdV.size(); x++)
            {
                if (stdV[x] != stdV[x])
                    return  res | CONTENT_DIFF;
            }
        }
        catch(...)
        {
            return  res | CONTENT_DIFF;
        }
    }
    return res;
}

inline void print_res(unsigned int res)
{
    std::cout << "[ SIZE: ";
    if (res & SIZE_DIFF)
        std::cout << "❌ | ";
    else
        std::cout << "✅ | ";
    std::cout << "CAPACITY: ";
    if (res & CAPACITY_DIFF)
        std::cout << "❌ | ";
    else
        std::cout << "✅ | ";
    std::cout << "CONTENT: ";
    if (res & CONTENT_DIFF)
        std::cout << "❌ ]";
    else
        std::cout << "✅ ]";
}

template <typename T>
void print_leaks()
{
    std::cout << " | allocations: [ std: " << std::setw(5) << myCustomAllocator <T, std::vector<T> >::_total_allocated_size;
    std::cout << ", ft: " << std::setw(5) << myCustomAllocator <T, ft::vector<T> >::_total_allocated_size;
    std::cout << " ] | ";
    if (myCustomAllocator <T, std::vector<T> >::allocated_size != myCustomAllocator <T, ft::vector<T> >::allocated_size)
       std::cout << "leaks: ❌";
    else
        std::cout << "leaks: ✅";
    std::cout << " [std: "<< std::setw(4)  << myCustomAllocator <T, std::vector<T> >::allocated_size;
    std::cout << ", ft: " << std::setw(4) << myCustomAllocator <T, ft::vector<T> >::allocated_size;
    std::cout << " ]\n";
    myCustomAllocator <T, ft::vector<T> >::_total_allocated_size = 0;
    myCustomAllocator <T, std::vector<T> >::_total_allocated_size = 0;
    myCustomAllocator <T, ft::vector<T> >::allocated_size = 0;
    myCustomAllocator <T, std::vector<T> >::allocated_size = 0;
}


void print_destructs(int x, int y)
{
    if (x != y)
       std::cout << "[   destroy:  ❌";
    else
        std::cout << "[   destroy:  ✅";
    std::cout << " std: " << std::setw(2)  << x - 1;
    std::cout << " ft: " << std::setw(2)  << y - 1;
    std::cout << "  ]";
}





template <class T>
struct InputIterator {
    typedef std::input_iterator_tag iterator_category;
    typedef T value_type;
    typedef ptrdiff_t difference_type;
    typedef const T *pointer;
    typedef const T &reference;
    InputIterator(T* current): current(current) {};
    InputIterator(InputIterator const& it): current(it.current) {};
    InputIterator& operator=(InputIterator const&it)
    {
        this->current = it.current;
        return *this;
    }
    bool operator==(InputIterator const& it)
    {
        return it.current == this->current;
    }
    
    bool    operator!=(InputIterator const& it)
    {
        return it.current != this->current;
    }

    T*    operator->()
    {
        return this->current;
    }

    T    operator*()
    {
        return *(this->current);
    }

    InputIterator&  operator++()
    {
        current = InputIterator::next;
        InputIterator::next++;
        return *this;
    }
    
    InputIterator  operator++(int)
    {
        InputIterator tmp = *this;
        current = InputIterator::next;
        InputIterator::next++;
        return tmp;
    }
    static T* next;
private:
    T*  current;
};
template <class T>
T* InputIterator<T>::next = 0;

