/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:38:28 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/24 23:58:22 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../utility/utility.hpp"
#include "../iterators/bidirectional_iterator.hpp"
#include "../iterators/reverse_iterator.hpp"



//********************************************************************************* //
//*  - Maps are associative containers that store elements formed by a combination	//
//*  of a key value and a mapped value, following a specific order.					//
//*  - Associative containers: implement sorted data structures that can be	quickly	//
//*  searched (O(log n) complexity).									 			//
//*  - Key is unique, used to sort and uniquely identify the elements.				//
//*  - The mapped values store the content associated to this key.					//
//*  - Key & value are grouped together in member type value_type.					//
//********************************************************************************* //
// ! Associative containers :
// ? https://subscription.packtpub.com/book/application-development/9781786461629/2/ch02lvl1sec14/associative-containers
//********************************************************************************* //
//*  -  Associative containers: store data in a sorted fashion, unlike the sequence //
//*  containers. Hence, the order in which the data is inserted will not be 		//
//*  retained by the associative containers. Associative containers are highly 		//
//*  efficient in searching a value with O( log n ) runtime complexity.				//
//*  Every time a new value gets added to the container, the container will reorder //
//*  the values stored internally if required.										//
//********************************************************************************* //

namespace ft
{
	template < class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator<ft::pair<const Key,T> >		// map::allocator_type
	           >
	class map
	{
		public :
		//***********************************************************************************
		//*																					*
		//*							member type												*
		//*		less			: https://www.cplusplus.com/reference/functional/less/.		*
		//*		value_compare	: Nested function class to compare elements.				*
		//*		size_t		: size_t.														*
		//***********************************************************************************
		class value_compare;
		typedef	Key																	key_type;
		typedef	T																	mapped_type;
		typedef	ft::pair<const key_type,mapped_type>								value_type;
		typedef	Compare																key_compare;
		typedef	typename map::value_compare											value_compare;
		typedef	Alloc																allocator_type;
		typedef	typename allocator_type::reference									reference;
		typedef typename allocator_type::const_reference							const_reference;
		typedef typename allocator_type::pointer									pointer;
		typedef typename allocator_type::const_pointer								const_pointer;
		typedef typename ft::bidirectional_iterator<value_type>						iterator;
		typedef typename ft::bidirectional_iterator<const value_type>				const_iterator;
		typedef typename ft::reverse_iterator<iterator>								reverse_iterator;
		typedef typename ft::reverse_iterator<const_iterator>						const_reverse_iterator;
		typedef typename iterator::difference_type									difference_type;
		typedef	size_t																size_type;
		typedef typename ft::redBlackTree<value_type, value_compare, Alloc>			tree;
		
		class value_compare
		{
			friend class map;
			protected:
			Compare comp;
			value_compare (Compare c) : comp(c) {}  // constructed with map's comparison object
			public:
			value_compare (void) : comp() {}
			typedef bool result_type;
			typedef value_type first_argument_type;
			typedef value_type second_argument_type;
			bool operator() (const value_type& x, const value_type& y) const
			{
				return comp(x.first, y.first);
			}
		};
		
		// **********************************************************************************
		// * 																	  			*
		// *								Iterator										*
		// *																				*
		// **********************************************************************************
		
		iterator begin() { return iterator(_tree.get_begin(), _tree.get_root());}
		const_iterator begin() const { return const_iterator(_tree.begin(), _tree.get_root());}
		iterator end() {return iterator(NULL, _tree.get_root());}
		const_iterator end() const{return const_iterator(NULL, _tree.get_root());}

		// **********************************************************************************
		// * 																	  			*
		// *								Modifiers										*
		// *																				*
		// **********************************************************************************
		
		// pair<iterator,bool> insert (const value_type& val) {}
		// void
		// private :
			tree			_tree;
			value_compare	_less;
			allocator_type	_alloc;
	};
}