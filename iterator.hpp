/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:15:16 by akhalidy          #+#    #+#             */
/*   Updated: 2022/02/18 21:00:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

//? Lvalues and rvalues: a friendly definition : https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c
//TODO: friend in cpp
namespace ft
{
	//! class template std::iterator_traits :
	//* Traits class : defining properties of iterators.
	template <typename _Iter>
	struct iterator_traits
	{
			typedef typename _Iter::difference_type   difference_type;	 //* result of subtracting one iterator from another
			typedef typename _Iter::value_type        value_type;		 //* The type of the element the iterator can point to
			typedef typename _Iter::pointer           pointer;			 //* The type of a pointer to an element the iterator can point to.
			typedef typename _Iter::reference         reference;		 //* The type of a reference to an element the iterator can point to.
			typedef typename _Iter::iterator_category iterator_category; //* The iterator category.
			//* The iterator category : (input_iterator_tag, output_iterator_tag, forward_iterator_tag,bidirectional_iterator_tag, random_access_iterator_tag).
	};

	template <typename T> 
	struct iterator_traits<T*>
	{
			typedef ptrdiff_t					difference_type;
			typedef T							value_type;
			typedef T*							pointer;
			typedef T&							reference;
			typedef random_access_iterator_tag	iterator_category;	
	};

	template <typename T> 
	struct iterator_traits<const T*>
	{
			typedef ptrdiff_t					difference_type;
			typedef T							value_type;
			typedef const T*					pointer;
			typedef const T&					reference;
			typedef random_access_iterator_tag	iterator_category;	
	};

	template <typename _Iter>
	class random_access_iterator
	{
		public:
			typedef typename ft::iterator_traits<_Iter>::difference_type   		difference_type;		//* ptrdiff_t		
			typedef typename ft::iterator_traits<_Iter>::value_type        		value_type;				//* T
			typedef typename ft::iterator_traits<_Iter>::pointer           		pointer;				//* T*
			typedef typename ft::iterator_traits<_Iter>::reference         		reference;				//* T&
			typedef typename ft::iterator_traits<_Iter>::iterator_category 		iterator_category;		//* T1 - T2
		
		//! getter function
		value_type	base(void) const{ return(__current);};
		/*
		//** const _Iterator& base() const { return _M_current; } why const refrence ??
		*/
		//! Constructors :
		random_access_iterator(void) : __current(_Iter()) {};
		template<typename _Iter> //! it should be a template so the instantiation of an iterator<T> with an iterator<const T> would work 
		random_access_iterator(const random_access_iterator<_Iter> &it) {*this = it};
		template<typename __Iter>
		random_access_iterator<_Iter>& operator=(const random_access_iterator<__Iter> &rhs) : __current(rhs.base()) {return(*this)};
		
		//! operators overload :
			//* increment and decrement operators :
		random_access_iterator&	operator++(void) {++__current; return(*this);} //* prefix has no parameter
		random_access_iterator	operator++(int) {return random_access_iterator(__current++);} //?{random_access_iterator temp(*this); this->__current++; return(temp);} //* postfix has an int parameter
		random_access_iterator&	operator--(void) {--__current; return(*this);} //* prefix has no parameter
		random_access_iterator	operator--(int) { return random_access_iterator(__current--);}//?{random_access_iterator temp(*this); this->__current--; return(temp);} //* postfix has an int parameter
			//* unary operators :
		//?random_access_iterator	&operator*() {if (__current) return *__current;}; => wash 5assni protecti la7zaak 
		reference						operator*(void) const {return *__current;}
		pointer							operator->(void) const {return __current;}; // std::vector<std::string> test(9, "lol"); std::vector<std::string>::iterator it = test.begin(); it->append();"if the underline container were an int there will be no function to call"
		reference						operator[](const difference_type& n) const {return (__current[n])};
		random_access_iterator			operator+(const difference_type& n) const {return random_access_iterator(__current + n}//?{random_access_iterator tmp; tmp.__current = __current + n; return tmp;}
		random_access_iterator			operator-(const difference_type& n) const {return random_access_iterator(__current - n}//?{random_access_iterator tmp; tmp.__current = __current - n; return tmp;}
		// difference_type					operator-(const random_access_iterator& rhs) {random_access_iterator tmp; tmp.__current = __current - rhs.__current; return tmp;}
		// friend random_access_iterator 	operator+(difference_type lhs, const random_access_iterator& rhs) {return rhs.operator+(lhs);}
		// friend random_access_iterator 	operator-(difference_type lhs, const random_access_iterator& rhs) {return rhs.operator-(lhs);}
		random_access_iterator&			operator+=(const difference_type& n) {__current += n; return *this;}
		random_access_iterator&			operator-=(const difference_type& n) {__current -= n; return *this;}
		private:
			value_type	__current;
			random_access_iterator(const reference curr) : _current(curr) {};  
	};

	template <typename _IterL, typename _IterR> 
	bool operator==(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current == rhs.__current); }
	template <typename _IterL, typename _IterR> 
	bool operator!=(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current != rhs.__current); }
	template <typename _IterL, typename _IterR> 
	bool operator<(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current < rhs.__current); }
	template <typename _IterL, typename _IterR> 
	bool operator>(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current > rhs.__current); }
	template <typename _IterL, typename _IterR> 
	bool operator<=(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current <= rhs.__current); }
	template <typename _IterL, typename _IterR> 
	bool operator>=(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current >= rhs.__current); }
	// template <typename _IterL, typename _IterR> 
	// random_access_iterator<_IterL, _IterR>::difference_type&	operator-(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.__current - rhs.__current); }
	//TODO 1 - a - b, 2 - 
}
