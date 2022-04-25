/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bidirectional_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 13:26:40 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/25 00:01:01 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
// #include "../utility/rb_tree.hpp"
#include "../srcs/map.hpp"

namespace ft
{
	template < class Key, class T, class Compare, class Alloc >
	class map;
	template <typename T, typename value_compare, typename Alloc >
	class redBlackTree;
	template <typename T>
	class bidirectional_iterator
	{
		public:
			typedef ptrdiff_t										difference_type;
			typedef T												value_type;
			typedef T*												pointer;
			typedef T&												reference;
			typedef std::bidirectional_iterator_tag					iterator_category;
			typedef typename ft::node<value_type>					node;
			typedef typename node::pointer							node_ptr;

		// //! getter function
			node_ptr	get_root(void) const{ return(__root);}
			node_ptr	get_current(void) const{ return(__current);}
		//! Constructors :
			bidirectional_iterator(void) : __current(), __root() {}
			bidirectional_iterator(node_ptr current, node_ptr root) : __current(current), __root(root) {}
			
			template <typename TT>
        	operator bidirectional_iterator<TT> () { return bidirectional_iterator<TT> (reinterpret_cast <typename bidirectional_iterator<TT>::node_ptr> (__current) , reinterpret_cast <typename bidirectional_iterator<TT>::node_ptr> (__root)); }
			
			//template <typename Iter>
			bidirectional_iterator(const bidirectional_iterator& it) {*this = it;}
			
			//template<typename Iter>
			bidirectional_iterator&		operator=(const bidirectional_iterator &rhs) 
			{
				__current = rhs.get_current();
				__root = rhs.get_root();
				return(*this);
			}
			
		// operator bidirectional_iterator<const T>()
		// {
		// 	return bidirectional_iterator<const T>(__current, __root);
		// }

			//! operators overload :
				// //* increment and decrement operators :
				bidirectional_iterator&	operator++(void)  //* prefix has no parameter
				{
					if (__current == __current->max(__root))
						__current = NULL;
					else
						__current = __current->successor(__current);
					return(*this);
				}
				bidirectional_iterator	operator++(int) //* postfix has an int parameter
				{
					node_ptr	tmp(__current);

					if (__current == __current->max(__root))
						__current = NULL;
					else
						__current = __current->successor(__current);
					return bidirectional_iterator(tmp, __root);
				}
				bidirectional_iterator&			operator--(void) //* prefix has no parameter
				{
					node_ptr max = __current->max(__root);

					if ((__current == NULL) && max)
						__current = max;
					else
						__current = __current->predecessor(__current);
					return(*this);
				}
				bidirectional_iterator			operator--(int)
				{
					node_ptr	tmp(__current);
					node_ptr	max = __current->max(__root);
					
					if (__current == NULL)
						__current =  max;
					else
						__current = __current->predecessor(__current);
					return bidirectional_iterator(tmp, __root);
				}
				//* unary operators :
				reference						operator*(void) const {return __current->data;}
				pointer							operator->(void) const {return &(__current->data);};				
				
		private :
			node_ptr		__current;
			node_ptr		__root;
	};

	template <typename _IterL, typename _IterR> 
	bool operator==(const bidirectional_iterator<_IterL>& lhs, const bidirectional_iterator<_IterR>& rhs)
	{
		// return ((lhs.get_root() == rhs.get_root()) && (lhs.get_current() == rhs.get_current()));
		return lhs.get_current() == rhs.get_current();
	}
	template <typename _IterL, typename _IterR> 
	bool operator!=(const bidirectional_iterator<_IterL>& lhs, const bidirectional_iterator<_IterR>& rhs)
	{
		// return ((lhs.get_root() != rhs.get_root()) && (lhs.get_current() != rhs.get_current()));
		return lhs.get_current() != rhs.get_current();
	}
}