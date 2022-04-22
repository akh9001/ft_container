/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirectional_iterator.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:26:40 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/22 17:18:00 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iterator_traits.hpp"
#include "utility/redBlackTree.hpp"

namespace ft
{
	template <typename T>
	class bidirectional_iterator
	{
		public:
			typedef typename iterator_traits<T>::difference_type   						difference_type;		//* ptrdiff_t		
			typedef typename iterator_traits<T>::value_type        						value_type;				//* T
			typedef typename iterator_traits<T>::pointer           						pointer;				//* T*
			typedef typename iterator_traits<T>::reference         						reference;				//* T&
			typedef typename iterator_traits<T>::iterator_category 						iterator_category;		//* T1 - T2
			typedef typename ft::redBlackTree<value_type, ft::map::value_compare>		rbt;
		
		//! Constructors :
			bidirectional_iterator(void) : __current(), __root() {}
			bidirectional_iterator(pointer current, pointer root) : __current(current), __root(root) {}
			template <typename Iter>
			bidirectional_iterator(const bidirectional_iterator<Iter>& it) {*this = it;}
			template<typename Iter>
			bidirectional_iterator&		operator=(const bidirectional_iterator<Iter> &rhs) { __current = rhs._current; __root = rhs.__root; return(*this);}
			
			//! operators overload :
				// //* increment and decrement operators :
				// bidirectional_iterator&			operator++(void)  //* prefix has no parameter
				// {
					
				// 	return(*this);
				// }
				// bidirectional_iterator			operator++(int) {return bidirectional_iterator(__current++);} //?{bidirectional_iterator temp(*this); this->__current++; return(temp);} //* postfix has an int parameter
				// bidirectional_iterator&			operator--(void) {--__current; return(*this);} //* prefix has no parameter
				// bidirectional_iterator			operator--(int) { return bidirectional_iterator(__current--);}
				//* unary operators :
				reference						operator*(void) const {return __current->data;}
				pointer							operator->(void) const {return __current;};				
				
		private :
			pointer		__curent;
			pointer		__root;
	};
}