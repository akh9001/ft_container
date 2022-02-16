/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:15:16 by akhalidy          #+#    #+#             */
/*   Updated: 2022/02/16 17:52:35 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// template <class Category,              // iterator::iterator_category
//           class T,                     // iterator::value_type
//           class Distance = ptrdiff_t,  // iterator::difference_type
//           class Pointer = T*,          // iterator::pointer
//           class Reference = T&         // iterator::reference
//           > class iterator;
// template <class T>
// class iterator
// {
// private:
// 	/* data */
// public:
// 	iterator(/* args */);
// 	~iterator();
// };

// !The iterator categories :
// struct input_iterator_tag {}; //* Empty class to identify the category of an iterator as an input iterator.
// struct output_iterator_tag {};
// struct forward_iterator_tag : public input_iterator_tag {};
// struct bidirectional_iterator_tag : public forward_iterator_tag {};
// struct random_access_iterator_tag : public bidirectional_iterator_tag {};

namespace ft
{
	template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
	struct iterator
	{
		typedef T        		value_type;
		typedef Distance 		difference_type;
		typedef Pointer  		pointer;
		typedef Reference		reference;
		typedef Category 		iterator_category;
	};

	template <class _Iter>
	class random_access_iterator : public iterator<std::random_access_iterator_tag, _Iter>
	{
		public:
			typedef _Iter                                                      					iterator_type;
			typedef typename iterator<std::random_access_iterator_tag, Iter>::iterator_category iterator_category;
			typedef typename iterator<std::random_access_iterator_tag, Iter>::value_type        value_type;
			typedef typename iterator<std::random_access_iterator_tag, Iter>::difference_type   difference_type;
			typedef typename iterator<std::random_access_iterator_tag, Iter>::pointer           pointer;
			typedef typename iterator<std::random_access_iterator_tag, Iter>::reference         reference;
			// typedef typename iterator_traits<iterator_type>::iterator_category iterator_category;
			// typedef typename iterator_traits<iterator_type>::value_type        value_type;
			// typedef typename iterator_traits<iterator_type>::difference_type   difference_type;
			// typedef typename iterator_traits<iterator_type>::pointer           pointer;
			// typedef typename iterator_traits<iterator_type>::reference         reference;
		//! Constructors :
		random_access_iterator(void) : __current(NULL) {};
		random_access_iterator(const random_access_iterator &it) {*this = it};
		random_access_iterator& operator=(const random_access_iterator &rhs) : __current(rhs.__current) {return(*this)};
		//! operators overload :
		bool operator==(const random_access_iterator& lhs, const random_access_iterator& rhs){ return (lhs.__current == rhs.__current); }
		bool operator!=(const random_access_iterator& lhs, const random_access_iterator& rhs){ return (lhs.__current != rhs.__current); }
		bool operator<(const random_access_iterator& lhs, const random_access_iterator& rhs){ return (lhs.__current < rhs.__current); }
		bool operator>(const random_access_iterator& lhs, const random_access_iterator& rhs){ return (lhs.__current > rhs.__current); }
		bool operator<=(const random_access_iterator& lhs, const random_access_iterator& rhs){ return (lhs.__current <= rhs.__current); }
		bool operator>=(const random_access_iterator& lhs, const random_access_iterator& rhs){ return (lhs.__current >= rhs.__current); }
			//* increment and decrement operators :
		random_access_iterator&	operator++(void) {this->__current++; return(*this);} //* prefix has no parameter
		random_access_iterator	operator++(int) {random_access_iterator temp(*this); this->__current++; return(temp);} //* postfix has an int parameter
		random_access_iterator&	operator--(void) {this->__current--; return(*this);} //* prefix has no parameter
		random_access_iterator	operator--(int) {random_access_iterator temp(*this); this->__current--; return(temp);} //* postfix has an int parameter
			//* unary operators :
		//?random_access_iterator	&operator*() {if (__current) return *__current;}; => wash 5assni protecti la7zaak 
		reference	operator*(void) {return *__current;};
		private:
			pointer __current;
	};

	//! class template std::iterator_traits :
	//* Traits class : defining properties of iterators.
	template <class _Iter>
	struct iterator_traits
	{
			typedef typename _Iter::difference_type   difference_type;	 //* result of subtracting one iterator from another
			typedef typename _Iter::value_type        value_type;		 //* The type of the element the iterator can point to
			typedef typename _Iter::pointer           pointer;			 //* The type of a pointer to an element the iterator can point to.
			typedef typename _Iter::reference         reference;		 //* The type of a reference to an element the iterator can point to.
			typedef typename _Iter::iterator_category iterator_category; //* The iterator category.
			//* The iterator category : (input_iterator_tag, output_iterator_tag, forward_iterator_tag,bidirectional_iterator_tag, random_access_iterator_tag).
	};

	template <class T> 
	struct iterator_traits<T*>
	{
			typedef ptrdiff_t					difference_type;
			typedef T							value_type;
			typedef T*							pointer;
			typedef T&							reference;
			typedef random_access_iterator_tag	iterator_category;	
	};

	template <class T> 
	struct iterator_traits<const T*>
	{
			typedef ptrdiff_t					difference_type;
			typedef T							value_type;
			typedef const T*					pointer;
			typedef const T&					reference;
			typedef random_access_iterator_tag	iterator_category;	
	};
}
