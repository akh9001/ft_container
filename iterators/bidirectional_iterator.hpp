/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirectional_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:26:40 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/23 22:46:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../utility/redBlackTree.hpp"
#include "../srcs/map.hpp"

namespace ft
{
	// class map;
	// class redBlackTree;
	template <typename T>
	class bidirectional_iterator
	{
		public:
			typedef ptrdiff_t																	difference_type;
			typedef T																			value_type;
			typedef T*																			pointer;
			typedef T&																			reference;
			typedef std::bidirectional_iterator_tag												iterator_category;
			typedef ft::redBlackTree<value_type, ft::map::value_compare>						rbt;
			typedef rbt::node_ptr																node_ptr;
		
		//! getter function
			node_ptr	get_root(void) const{ return(__root);}
			node_ptr	get_current(void) const{ return(__current);}
		//! Constructors :
			bidirectional_iterator(void) : __current(), __root(), __max() {}
			bidirectional_iterator(pointer current) : __current(current) { __root = rbt::get_root(current); __max = rbt::get_max(__root);}
			bidirectional_iterator(pointer current, pointer root) : __current(current), __root(root) { __max = rbt::get_max(__root);}
			template <typename Iter>
			bidirectional_iterator(const bidirectional_iterator<Iter>& it) {*this = it;}
			template<typename Iter>
			bidirectional_iterator&		operator=(const bidirectional_iterator<Iter> &rhs) 
			{ __current = rhs._current; __root = rhs.__root; __max = rhs.__max;  return(*this);}
			
			//! operators overload :
				// //* increment and decrement operators :
				bidirectional_iterator&	operator++(void)  //* prefix has no parameter
				{
					if (__current == __max)
						__current = NULL;
					else
						__current = bst::successor(__current);
					return(*this);
				}
				bidirectional_iterator	operator++(int) //* postfix has an int parameter
				{
					return bidirectional_iterator(__current++);
				}
				bidirectional_iterator&			operator--(void) //* prefix has no parameter
				{
					if (!__current && __max)
						return __max;
					else
						__current = bst::predecessor(__current);
					return(*this);
				}
				bidirectional_iterator			operator--(int)
				{
					return bidirectional_iterator(__current--);
				}
				//* unary operators :
				reference						operator*(void) const {return __current->data;}
				pointer							operator->(void) const {return &(__current->data);};				
				
		private :
			node_ptr		__current;
			node_ptr		__root;
			node_ptr		__max;
	};

	template <typename _IterL, typename _IterR> 
	bool operator==(const bidirectional_iterator<_IterL>& lhs, const bidirectional_iterator<_IterR>& rhs)
	{
		return ((lhs.get_root() == rhs.get_root()) && (lhs.get_current() == rhs.get_current()));
	}
	template <typename _IterL, typename _IterR> 
	bool operator!=(const bidirectional_iterator<_IterL>& lhs, const bidirectional_iterator<_IterR>& rhs)
	{
		return ((lhs.get_root() != rhs.get_root()) && (lhs.get_current() != rhs.get_current()));
	}
}