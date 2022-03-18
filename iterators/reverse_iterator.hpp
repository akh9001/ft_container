/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 06:32:33 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/18 08:23:10 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iterator.hpp"

namespace ft
{
	//! reverse_iterator is an iterator adaptor that reverses the direction of a given iterator
	//! &*(reverse_iterator(i)) == &*(i - 1)
	template <typename _Iter>
	class	reverse_iterator
	{						
		public :
			//? Member types :
			typedef _Iter									   				iterator_type;				//* Iterator's type		
			typedef typename iterator_traits<_Iter>::difference_type   		difference_type;		//* ptrdiff_t		
			typedef typename iterator_traits<_Iter>::value_type        		value_type;				//* T
			typedef typename iterator_traits<_Iter>::pointer           		pointer;				//* T*
			typedef typename iterator_traits<_Iter>::reference         		reference;				//* T&
			typedef typename iterator_traits<_Iter>::iterator_category 		iterator_category;		//* T1 - T2
			//! constructor : 
			//? (1) default constructor
			reverse_iterator() : _it(){}
			//? (2) initalization constructor
			explicit reverse_iterator (iterator_type it) : _it(it) {}
			//? copy / type-cast constructor
			template <class Iter>
			reverse_iterator (const reverse_iterator<Iter>& rev_it){*this = rev_it;}
			template <class Iter>
			reverse_iterator& operator=(const reverse_iterator<Iter>& rev_it) {_it = rev_it.base(); return (*this);}
		
			//! operators overload :
			//? Member functions :
			iterator_type	base(void) const{ return(_it);} //* Getter : Returns a copy of the base iterator
			//* operator* Returns a reference to the element previous to current.
			reference		operator*() const {return(*(_it - 1));}
			//* operator+ Addition operator
			reverse_iterator operator+( difference_type n ) const { return reverse_iterator(_it - n);}
			//* operator++ Increment iterator position
			reverse_iterator& operator++(void) {--_it; return *this;}
			reverse_iterator operator++(int) {reverse_iterator tmp = *this; --_it; return tmp;}
			//* operator+= Advance iterator
			reverse_iterator& operator+=( difference_type n ) { _it -= n; return *this;}
			//* operator- Subtraction operator
			reverse_iterator operator-( difference_type n ) const { return reverse_iterator(_it + n);}
			//* operator-- Decrease iterator position
			reverse_iterator& operator--(void) {++_it; return *this;}
			reverse_iterator operator--(int) {reverse_iterator tmp = *this; ++_it; return tmp;}
			//* operator-= Retrocede iterator
			reverse_iterator& operator-=( difference_type n ) {_it += n; return *this;}
			//* operator-> Returns a pointer to the element previous to current.
			pointer		operator->() const { return((_it - 1).operator->());}
			//* operator[] Returns a reference to the element at specified relative location, that is, base()[-n-1].
			reference	operator[]( difference_type n ) const {return ((_it - 1).operator[](n));}
		private :
			iterator_type		_it;
	};
	//? Non-member function overloads :
	template <typename _IterL, typename _IterR>
	bool operator== (const reverse_iterator<_IterL>& lhs, const reverse_iterator<_IterR>& rhs){ return (lhs.base() == rhs.base());}
	template <typename _IterL, typename _IterR>
	bool operator!= (const reverse_iterator<_IterL>& lhs, const reverse_iterator<_IterR>& rhs){ return (lhs.base() != rhs.base());}
	template <typename _IterL, typename _IterR>
	bool operator<  (const reverse_iterator<_IterL>& lhs, const reverse_iterator<_IterR>& rhs){ return (lhs.base() > rhs.base());}
	template <typename _IterL, typename _IterR>
	bool operator<= (const reverse_iterator<_IterL>& lhs, const reverse_iterator<_IterR>& rhs){ return (lhs.base() >= rhs.base());}
	template <typename _IterL, typename _IterR>
	bool operator>  (const reverse_iterator<_IterL>& lhs, const reverse_iterator<_IterR>& rhs){ return (lhs.base() < rhs.base());}
	template <typename _IterL, typename _IterR>
	bool operator>= (const reverse_iterator<_IterL>& lhs, const reverse_iterator<_IterR>& rhs){ return (lhs.base() <= rhs.base());}
	template <typename _Iter>
	reverse_iterator<_Iter> operator+(typename reverse_iterator<_Iter>::difference_type n, const reverse_iterator<_Iter>& rev_it)
	{
		return (reverse_iterator<_Iter>(rev_it.base() - n)); //* or return (rev_it + n), return (rev_it.operator+(n))
	}
	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type operator-(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
	{
		return (rhs.base() - lhs.base());
	}
} // namespace ft
