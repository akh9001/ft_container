/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:40:31 by akhalidy          #+#    #+#             */
/*   Updated: 2022/02/18 03:26:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <iterator>

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
	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		private:
			size_type		_size;
			size_type		_capacity;
			allocator_type	_alloc;
			pointer			_ptr;

		public:
		
			//* Member types :
			typedef	T													value_type;
			typedef	Alloc												allocator_type;
			typedef typename allocator_type::reference					reference;
			typedef typename allocator_type::const_reference			const_reference;
			typedef typename allocator_type::pointer					pointer;
			typedef typename allocator_type::difference_type			difference_type;
			typedef typename allocator_type::const_pointer				const_pointer;
			typedef typename ft::random_access_iterator<pointer>		iterator;
			typedef typename ft::random_access_iterator<const_pointer>	const_iterator;
			typedef typename ft::reverse_iterator<pointer>				reverse_iterator;
			typedef typename ft::reverse_iterator<const_pointer>		const_reverse_iterator;
			typedef std::ptrdiff_t										difference_type;
			typedef	std::size_t											size_type;
			//? ptrdiff_t difference_type : Difference between two pointers
			//? std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.
			//* Member functions :
			explicit vector (const allocator_type& alloc = allocator_type());
			explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
	};

template <class T, class Alloc>
vector<T, Alloc>::vector(const allocator_type& alloc = allocator_type())
{
	_size = 0;
	_capacity = 0;
	_alloc = alloc;
	_ptr = alloc.allocate(0);
}

template <class T, class Alloc>
vector<T, Alloc>::vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
{
	//* if (n > alloc.max_size)
	//* 	throw std::bad_alloc();
	// pointer = alloc.allocate(n);
	// for (int i = 0; i < n; i++)
	// 	pointer[i] = val;
	_size = n;
	_capacity = n;
	_alloc = alloc;
	_ptr = alloc.allocate(n);
	for (int i = 0; i < n; i++)
		_alloc.construct(_ptr)
}
};

//  template <class T>
//  class vector_iterator : public iterator <T>
//  {
	 
//  };

// vector_iterator<T> : iterator<std::random...., T>
// {
// 	T* current;

// 	operator ++()
// 	{
// 		current++;
// 	}
	
// 	bool operator ==(iterator val)
// 	{	
// 		return (this == val)
// 	}
// }