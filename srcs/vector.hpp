/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:40:31 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/18 08:25:41 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "../iterators/iterator.hpp"
#include "../iterators/reverse_iterator.hpp"
#include "../utility/enable_if.hpp"
#include "../utility/distance.hpp"
#include "../utility/equal.hpp"
#include "../utility/lexicographical_compare.hpp"

/*
 *jlkll
 ? hk
  ! hkl
  TODO:trkl
*/
//? Default Parameters
//! Difference between typedef & define :
//* typedef can provide alternative names to data types only. It cannot do the same with values.
//* It can provide alternative names to values as well. For example, 3.14159 can be defined as pi.
//TODO: Asmaa matnsaych ta9ray hadi: https://data-flair.training/blogs/preprocessors-in-c/
//TODO: Should read about iterators
/*
? typename : https://stackoverflow.com/questions/18385418/c-meaning-of-a-statement-combining-typedef-and-typename#:~:text=typename%20here%20is,of%20as%20contains.
? explicit keyword : https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
* The explicit keyword in C++ is used to mark constructors to not implicitly convert types.
*/
namespace ft
{
	template < typename T, typename Alloc = std::allocator<T> >
	class vector
	{

		public:
		
			//* Member types :
			typedef	T														value_type;
			typedef	Alloc													allocator_type;
			typedef typename allocator_type::reference						reference;
			typedef typename allocator_type::const_reference				const_reference;
			typedef typename allocator_type::pointer						pointer;
			typedef typename allocator_type::difference_type				difference_type;
			typedef typename allocator_type::const_pointer					const_pointer;
			typedef typename ft::random_access_iterator<pointer>			iterator;
			typedef typename ft::random_access_iterator<const_pointer>		const_iterator;
			typedef typename ft::reverse_iterator<iterator>					reverse_iterator;
			typedef typename ft::reverse_iterator<const_iterator>			const_reverse_iterator;
			typedef	std::size_t												size_type;
			//? ptrdiff_t difference_type : Difference between two pointers
			//? std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
			//! Constructors:
			//* Member functions :
			explicit vector (const allocator_type& alloc = allocator_type()) : _size(), _capacity(), _alloc(alloc), _ptr()
			{
			}
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			{
				if (n > alloc.max_size())
					throw std::bad_alloc();
				_size = n;
				_capacity = n;
				_alloc = alloc;
				_ptr = _alloc.allocate(n);
				for (size_type i = 0; i < n; i++)
					_alloc.construct(_ptr + i, val);	
			}
			template <typename InIter> 
			vector (InIter first, typename ft::enable_if<!ft::is_integral<InIter>::value, InIter>::type last, const allocator_type& alloc = allocator_type())
				: _size(), _capacity(), _alloc(alloc), _ptr()
			{
				contructor_range(first, last, typename std::iterator_traits<InIter>::iterator_category());
			}
			vector (const vector& x) : _size(), _capacity(), _alloc(allocator_type()), _ptr()
			{
				*this = x;
			}
			
			vector& operator=(const vector& x)
			{
				if (this == &x)
					return (*this);
				for(size_type j = 0; j < _size; ++j)
					_alloc.destroy(_ptr + j);
				if (_capacity)
					_alloc.deallocate(_ptr, _capacity);
				_size = x._size;
				_capacity = x._capacity;
				_ptr = _alloc.allocate(_capacity);
				for(size_type j = 0; j < _size; ++j)
					_alloc.construct(_ptr + j, x._ptr[j]);
				return (*this);
			}
		// !Destructor:
			~vector(void)
			{
				for(size_type i = 0; i < _size; i++)
					_alloc.destroy(_ptr + i); //? Calls the destructor of the object pointed to by p (Calls p->~U()).
				_alloc.deallocate(_ptr, _capacity);
			}
		//! Iterators:
		//* Returns an iterator pointing to the first element in the vector.
			iterator begin(void) {return (iterator(_ptr));}
			const_iterator begin(void) const{return (const_iterator(_ptr));}
		//* Returns an iterator referring to the past-the-end element in the vector container.
		//? The past-the-end element is the theoretical element that would follow the last element in the vector.
		//? It does not point to any element, and thus shall not be dereferenced.
			iterator end() { return(iterator(_ptr + _size));}
			const_iterator end() const { return const_iterator(_ptr + _size);}
		//* Returns a reverse iterator pointing to the last element in the vector.
			reverse_iterator rbegin() {return (reverse_iterator(end()));}
			const_reverse_iterator rbegin() const {return (const_reverse_iterator(end()));}
		//* Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector.
			reverse_iterator rend(){ return(reverse_iterator(begin()));}
			const_reverse_iterator rend() const{ return(const_reverse_iterator(begin()));}
		//! Capacity:
		//* Returns the number of elements in the vector.
			size_type size() const {return (_size);}
		//* Return maximum size
			size_type max_size() const{return(_alloc.max_size());}
		//* Resizes the container so that it contains n elements.
			void resize (size_type n, value_type val = value_type())
			{
				size_type				i = 0;
				pointer			tmp = _ptr;
				size_type		newCapacity = n > _capacity * 2 ? n : _capacity * 2;
				allocator_type	tmp_alloc;
				
				if (n > max_size())
					throw(std::length_error(std::string("vector::resize")));
				if (n < _size)
				{
					for(size_type j = n; j < _size; ++j)
						_alloc.destroy(_ptr + j);
				}
				else
				{
					if (n > _capacity)
					{
						tmp = tmp_alloc.allocate(newCapacity);
						for(i = 0; i < _size; ++i)
							_alloc.construct(&tmp[i],_ptr[i]);//tmp[i] = _ptr[i]; //* may be yo should use allocator::construct.
					}
					for(i = _size; i < n; ++i)
						_alloc.construct(&tmp[i],val);//tmp[i] = val; //* if you use .tmp[i] = val, with a const T it wouldnt work, beacause const T should be initialized so you have to use constructors
					if (n > _capacity)
					{
						for(size_type j = 0; j < _size; ++j)
							_alloc.destroy(_ptr + j);
						_alloc.deallocate(_ptr, _capacity);
						_ptr = tmp;
						_alloc = tmp_alloc;
						_capacity = newCapacity;
					}
				}
				_size = n;
			}
		// * Return size of allocated storage capacity
			size_type capacity(void) const {return _capacity;}
		// * Test whether vector is empty; whether its size is 0.
		//? Return Value : true if the container size is 0, false otherwise.
			bool empty() const { return(!_size); }
		// * Request a change in capacity.
		//? method only allocates memory, but leaves it uninitialized. It only affects capacity(), but size() will be unchanged.
			void reserve (size_type n)
			{
				pointer			tmp;
				allocator_type	tmp_alloc;

				if (n > max_size())
					throw(std::length_error(std::string("vector::reserve")));
				if (n > _capacity)
				{
					tmp = tmp_alloc.allocate(n);
					for(size_type i = 0; i < _size; ++i)
						_alloc.construct(&tmp[i],_ptr[i]);
					for(size_type i = 0; i < _size; ++i)
						_alloc.destroy(_ptr + i);		
					_alloc.deallocate(_ptr, _capacity);
					_ptr = tmp;
					_alloc = tmp_alloc;
					_capacity = n;
				}
			}
		//! Element access:
		// * Returns a reference to the element at position n in the vector container.
			reference operator[] (size_type n) { return _ptr[n];}
			const_reference operator[] (size_type n) const { return _ptr[n];}
		// * Returns a reference to the element at position n in the vector.
      		reference at(size_type n)
			{
				if (n >= _size)
					throw(std::out_of_range(std::string("vector::at")));
				return _ptr[n];
			}
			const_reference at (size_type n) const
			{
				if (n >= _size)
					throw(std::out_of_range(std::string("vector::at")));
				return _ptr[n];
			}
		// * Returns a reference to the first element in the vector.
			reference front() {return _ptr[0];}
			const_reference front() const {return _ptr[0];}
		// * Returns a reference to the last element in the vector.
			reference back() {return _ptr[_size - 1];}
			const_reference back() const {return _ptr[_size - 1];}
	// TODO : assign
		// ! Modifiers:
		// * Assigns new contents to the vector, replacing its current contents, and modifying its size accordingly.
			template <class InputIterator>
			void assign (typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type first, InputIterator last)
			{
				size_type	i;
				
				for(i = 0; i < _size; i++)
					_alloc.destroy(_ptr + i);
				_size = 0;
				do_assign(first, last, typename std::iterator_traits<InputIterator>::iterator_category());
			}
			void assign (size_type n, const value_type& val)
			{
				size_type	i;

				if (n > max_size())
					throw(std::length_error(std::string("vector::assign")));
				for(i = 0; i < _size; i++)
					_alloc.destroy(_ptr + i);
				if (n > _capacity)
				{
					_alloc.deallocate(_ptr, _capacity);
					_ptr = _alloc.allocate(n);
					_capacity = n;
				}
				for (i = 0; i < n; i++)
					_alloc.construct(&_ptr[i], val);
				_size = n;
			}
		// * Adds a new element at the end of the vector, after its current last element.
			//? How cute (^__^)!
			void push_back (const value_type& val)
			{
				resize(_size + 1, val);
			}
		// * Removes the last element in the vector, effectively reducing the container size by one.
			void pop_back(void)
			{
				_alloc.destroy(_ptr + (--_size));
				// _size -= 1;
				// _alloc.destroy(_ptr + _size);
			}
		// * The vector is extended by inserting new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
		// ? Single element :
		
			iterator insert (iterator position, const value_type& val)
			{
				difference_type	diff = ft::distance(this->begin(), position);

				insert(position, 1, val);
				return (this->begin() + diff);
			}
		// ? fill
			void insert (iterator position, size_type n, const value_type& val)
			{
				size_type	newSize = n + _size;
				size_type	newCapacity = newSize < (2 * _capacity ) ? (2 * _capacity ): newSize;
				size_type	firstPosition = std::distance(this->begin(), position);
				size_type	lastPosition = firstPosition + n;
				size_type	i;

				if (!n)
					return ;
				reserve(newSize > _capacity ? newCapacity : newSize);
				for(i = newSize - 1; i >= lastPosition; i--)
				{
					if (i >= _size)
						_alloc.construct(&_ptr[i], _ptr[i - n]);
					else
						_ptr[i] = _ptr[i - n];
				}
				for (i = lastPosition; i > firstPosition; i--)
				{
					if (i >= _size)
						_alloc.construct(&_ptr[i - 1], val);
					else
						_ptr[i - 1 ] = val;
				}
				_size = newSize;
			}
		//  ? range
			template <class InputIterator>
			void insert (iterator position, typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type first, InputIterator last)
			{
				do_insert(position, first, last, typename std::iterator_traits<InputIterator>::iterator_category());
			}
		// * Removes from the vector either a single element (position) or a range of elements ([first,last)).
			iterator erase (iterator position)
			{
				return(erase(position, position + 1));
			}
			
			iterator erase (iterator first, iterator last)
			{
				size_type	start = first - this->begin();
				size_type	n = last - first;
				size_type	end = start + n;

				for(size_type i = 0; i < _size ; ++i)
					_ptr[start + i] = _ptr[end + i];
				for(size_type i = 0; i < n ; ++i)
					pop_back();
				return(first);
			}
		// * Exchanges the content of the container by the content of x, which is another vector object of the same type. Sizes may differ.
			void swap (vector& x)
			{
				std::swap(_size, x._size);
				std::swap(_capacity, x._capacity);
				std::swap(_alloc, x._alloc);
				std::swap(_ptr, x._ptr);
			}
		
		// * Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.
			void clear(void)
			{
				erase(this->begin(), this->end());
			}
		// ! Allocator:
		// * Returns a copy of the allocator object associated with the vector.
			allocator_type get_allocator(void) const { return _alloc;}
		//! Help functions:
		private:
			template <typename InIter>
			void	contructor_range(InIter first, InIter  last, const std::forward_iterator_tag&)
			{
				difference_type diff_type;

				diff_type = std::distance(first, last);
				_size = diff_type;
				_capacity = diff_type;
				_ptr = _alloc.allocate(_capacity);
				for(difference_type i = 0; i < diff_type && first != last; i++)
					_alloc.construct(_ptr + i, *first++);
			}
			template <typename InIter>
			void			contructor_range(InIter first, InIter  last, const std::input_iterator_tag&)
			{
				while(first != last)
					push_back(*first++);
			}
			template <class InputIterator>
			void do_assign (InputIterator first, InputIterator last, const std::forward_iterator_tag&)
			{
				size_type 	n;
				size_type	i;

				n = std::distance(first, last);
				if (_capacity < n)
				{
					_alloc.deallocate(_ptr, _capacity);
					_ptr = _alloc.allocate(n);
					_capacity = n;
				}
				for (i = 0; i < n; i++)
					_alloc.construct(&_ptr[i],*first++);
				_size = n;
			}
			template <class InputIterator>
			void do_assign (InputIterator first, InputIterator last, const std::input_iterator_tag&)
			{
				while(first != last)
					push_back(*first++);
			}
			template <class InputIterator>
			void do_insert (iterator position, InputIterator first, InputIterator last, const std::forward_iterator_tag&)
			{
				difference_type	n = std::distance(first, last);
				size_type		newSize = n + _size;
				size_type		newCapacity = newSize < (2 * _capacity ) ? (2 * _capacity ): newSize;
				size_type		firstPosition = std::distance(this->begin(), position);
				size_type		lastPosition = firstPosition + n;
				size_type		i;
				
				if (!n)
					return ;
				reserve(newSize > _capacity ? newCapacity : newSize);
				//* Decaler les n dernieres elts de mon vector.
				for(i = newSize - 1; i >= lastPosition; i--)
				{
					if (i >= _size)
						_alloc.construct(&_ptr[i], _ptr[i - n]);
					else
						_ptr[i] = _ptr[i - n];
				}
				//* Copier les n elts 
				for (i = lastPosition; i > firstPosition; i--)
				{
					if (i >= _size)
						_alloc.construct(&_ptr[i - 1], *--last);
					else
						_ptr[i - 1] = *--last;
				}
				_size = newSize;
			}
			template <class InputIterator>
			void do_insert (iterator position, InputIterator first, InputIterator last, const std::input_iterator_tag&)
			{
				size_type		n = 0;
				size_type		i = 0;
				size_type		pos = std::distance(this->begin(), position);
				value_type		tmp;
				
				while(first != last)
				{
					push_back(*first++);
					n++;
				}
				for (; i < n; i++)
				{
					tmp = _ptr[pos + i];
					_ptr[pos + i] = _ptr[_size - n + i];
					_ptr[_size - n + i] = tmp;
				}
			}
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_alloc;
			pointer			_ptr;
	};
	//! Non-member function overloads :
	template <class T, class Alloc>
	void swap (vector<T,Alloc>& x, vector<T, Alloc>& y)
	{
		x.swap(y); 
	}
	
	template <class T, class Alloc>
	bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		if (lhs.size() != rhs.size())
			return (false);
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	}
	// * a != b <==> !(a == b)
	template <class T, class Alloc>
	bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return !(lhs == rhs);
	}
	
	template <class T, class Alloc>
	bool operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}
	// * a <= b <==> !(b < a)
	template <class T, class Alloc>
	bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return (!(rhs < lhs));
	}
	// * a > b	<==> b < a
	template <class T, class Alloc>
	bool operator> (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return (rhs < lhs);
	}
	// * a >= b	<==> !(a < b)
	template <class T, class Alloc>
	bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
	{
		return (!(lhs < rhs));
	}
};
