/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:15:16 by akhalidy          #+#    #+#             */
/*   Updated: 2022/02/16 19:41:33 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//? Lvalues and rvalues: a friendly definition : https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c
namespace ft
{

	template <class _Iter>
	class random_access_iterator
	{
		public:
			typedef typename ft::iterator_traits<_Iter>::iterator_category 		iterator_category;
			typedef typename ft::iterator_traits<_Iter>::value_type        		value_type;
			typedef typename ft::iterator_traits<_Iter>::difference_type   		difference_type;
			typedef typename ft::iterator_traits<_Iter>::pointer           		pointer;
			typedef typename ft::iterator_traits<_Iter>::reference         		reference;
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
		reference						operator*(void) {return *__current;};
		pointer							operator->(void) {return __current;}; // std::vector<std::string> test(9, "lol"); std::vector<std::string>::iterator it = test.begin(); it->append();"if the underline container were an int there will be no function to call"
		random_access_iterator			operator+(difference_type n) {random_access_iterator tmp; tmp.__current = __current + n; return tmp;}
		random_access_iterator			operator-(difference_type n) {random_access_iterator tmp; tmp.__current = __current - n; return tmp;}
		difference_type					operator-(const random_access_iterator& rhs) {random_access_iterator tmp; tmp.__current = __current - rhs.__current; return tmp;}
		friend random_access_iterator 	operator+(difference_type lhs, const random_access_iterator& rhs) {return rhs.operator+(lhs);}
		friend random_access_iterator 	operator-(difference_type lhs, const random_access_iterator& rhs) {return rhs.operator-(lhs);}
		random_access_iterator&			operator+=(difference_type n) {__current += n; return *this;}
		random_access_iterator&			operator-=(difference_type n) {__current -= n; return *this;}
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
