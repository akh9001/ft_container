/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:40:31 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/06 02:00:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <iterator>
#include "iterator.hpp"

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
			// template <typename InIter>
			// vector (InIter first, InIter last, const allocator_type& alloc = allocator_type())
			// {
			// 	difference_type diff_type;

			// 	diff_type = last - first;
			// 	_size = diff_type;
			// 	_capacity = diff_type;
			// 	_alloc = alloc;
			// 	_ptr = alloc.allocate(_capacity);
			// 	for(int i = 0; i < diff_type && first != last; i++)
			// 		_alloc.construct(_ptr + i, *first++);
			// 		// _ptr[i] = *first++;
			// }
			vector (const vector& x)
			{
				*this = x;
			}
			
			vector& operator=(const vector& x)
			{
				// if (_size)
				// {
				// 	_size = x.;
				// 	_capacity = diff_type;
				// 	_alloc = alloc;
				// 	_ptr = alloc.allocate(_capacity);
				// }
			}
			
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
					throw(std::length_error(std::string("length_error::length limits exceeded!")));
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
			// void reserve (size_type n)
			// {
			// 	if (n > _capacity)
			// 	{
					
			// 	}
			// }
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_alloc;
			pointer			_ptr;
	};
};
