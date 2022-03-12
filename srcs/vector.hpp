/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:40:31 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/12 03:45:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <iterator>
#include "iterator.hpp"
#include "enable_if.hpp"
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

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
				// _size = 0;
				// _capacity = 0;
				// _alloc = alloc;
				// // _ptr = alloc.allocate(0);
				// _ptr = nullptr;
			}
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
			{
				//* if (n > alloc.max_size)
				//* 	throw std::bad_alloc();
				// pointer = alloc.allocate(n);
				// for (int i = 0; i < n; i++)
				// 	pointer[i] = val;
				_size = n;
				_capacity = n;
				_alloc = alloc;
				_ptr = _alloc.allocate(n);
				for (int i = 0; i < n; i++)
					_alloc.construct(_ptr + i, val);	// _ptr[i] = val;		
			}
			template <typename InIter> 
			vector (InIter first, typename ft::enable_if<!ft::is_integral<InIter>::value, InIter>::type  last, const allocator_type& alloc = allocator_type()) : _size(), _capacity(), _alloc(alloc), _ptr()
			{
				contructor_range(first, last, typename std::iterator_traits<InIter>::iterator_category());
			}
			// vector (const vector& x)
			// {
			// 	*this = x;
			// }
			
			// vector& operator=(const vector& x)
			// {
			// 	// if (_size)
			// 	// {
			// 	// 	_size = x.;
			// 	// 	_capacity = diff_type;
			// 	// 	_alloc = alloc;
			// 	// 	_ptr = alloc.allocate(_capacity);
			// 	// }
			// }
		// !Destructor:
			~vector(void)
			{
				for(int i = 0; i < _size; i++)
					_alloc.destroy(_ptr + i); //? Calls the destructor of the object pointed to by p (Calls p->~U()).
				_alloc.deallocate(_ptr, _capacity);
			}
		//! Iterators:
		//* Returns an iterator pointing to the first element in the vector.
			iterator begin(void) {return (iterator(_ptr));}
			const_iterator begin(void) const{return (iterator(_ptr));}
		//* Returns an iterator referring to the past-the-end element in the vector container.
		//? The past-the-end element is the theoretical element that would follow the last element in the vector.
		//? It does not point to any element, and thus shall not be dereferenced.
			iterator end() { return(iterator(_ptr + _size));}
			const_iterator end() const { return iterator(_ptr + _size);}
		//* Returns a reverse iterator pointing to the last element in the vector.
			reverse_iterator rbegin() {return (reverse_iterator(end()));}
			const_reverse_iterator rbegin() const {reverse_iterator(end());}
		//* Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector.
			reverse_iterator rend(){ return(reverse_iterator(begin()));}
			const_reverse_iterator rend() const{ return(reverse_iterator(begin()));}
		//! Capacity:
		//* Returns the number of elements in the vector.
			size_type size() const {return (_size);}
		//* Return maximum size
			size_type max_size() const{return(_alloc.max_size());}
		//* Resizes the container so that it contains n elements.
			void resize (size_type n, value_type val = value_type())
			{
				int				i = 0;
				pointer			tmp = _ptr;
				size_type		newCapacity = n > _capacity * 2 ? n : _capacity * 2;
				allocator_type	tmp_alloc;
				
				if (n > max_size())
					throw(std::length_error(std::string("vector::resize")));
				if (n < _size)
				{
					for(int j = n; j < _size; ++j)
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
						_alloc.construct(&tmp[i],val);//tmp[i] = val; //* may be yo should use allocator::construct.
					if (n > _capacity)
					{
						for(int j = 0; j < _size; ++j)
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
					for(int i = 0; i < _size; ++i)
					{
						_alloc.construct(&tmp[i],_ptr[i]);
						_alloc.destroy(_ptr + i);			
					}
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
			void assign (InputIterator first, InputIterator last);
			void assign (size_type n, const value_type& val);
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
				// _alloc.destroy(_ptr + (_size - 1));
				// _size -= 1;
			}
		// * The vector is extended by inserting new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
		// ? Single element :
		
			iterator insert (iterator position, const value_type& val)
			{
				
			}
			
		// * Removes from the vector either a single element (position) or a range of elements ([first,last)).
			iterator erase (iterator position)
			{
				// size_type	start = position - this->begin();
				
				// for(size_type i = start; i < _size - 1 ; ++i)
				// 	_ptr[i] = _ptr[i + 1];
				// pop_back();
				// return(position);
				return(erase(position, position + 1));
			}
			
			iterator erase (iterator first, iterator last)
			{
				size_type	start = first - this->begin();
				size_type	end = last - this->begin();
				size_type	n = last - first;

				for(size_type i = 0; i <= _size ; ++i)
					_ptr[start + i] = _ptr[end + i];
				for(size_type i = 0; i < n ; ++i)
					pop_back();
				return(last);
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
		private:
			template <typename InIter>
			void			contructor_range(InIter first, InIter  last, const std::forward_iterator_tag&)
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
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_alloc;
			pointer			_ptr;
	};
};
