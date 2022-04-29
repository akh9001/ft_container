/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:19:16 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/28 23:49:23 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../utility/utility.hpp"
#include "../iterators/bidirectional_iterator.hpp"
#include "../iterators/reverse_iterator.hpp"



//*******************************************************************************/
//*  - sets are associative containers that store unique elements following 	*/
//*		a specific order.														*/
//*	 - the value of an element also identifies it (the value is itself the key. */
//*	 	of type T), and each value must be unique.								*/
//*	 - T is always const.														*/
//*******************************************************************************/

namespace ft
{
	template < class T, class Compare = std::less<T>, class Alloc = std::allocator<T> >
	class set
	{
		private :
		class accessor;
		public :
		//***********************************************************************************
		//*																					*
		//*							member type												*
		//*		less			: https://www.cplusplus.com/reference/functional/less/.		*
		//*		value_compare	: Nested function class to compare elements.				*
		//*		size_t		: size_t.														*
		//***********************************************************************************
		typedef	T																						key_type;
		typedef	T																						value_type;
		typedef	Compare																					key_compare;
		typedef	Compare																					value_compare;
		typedef	Alloc																					allocator_type;
		typedef	typename allocator_type::reference														reference;
		typedef typename allocator_type::const_reference												const_reference;
		typedef typename allocator_type::pointer														pointer;
		typedef typename allocator_type::const_pointer													const_pointer;
		typedef typename ft::bidirectional_iterator<value_type>											iterator;
		typedef typename ft::bidirectional_iterator<const value_type>									const_iterator;
		typedef typename ft::reverse_iterator<iterator>													reverse_iterator;
		typedef typename ft::reverse_iterator<const_iterator>											const_reverse_iterator;
		typedef typename iterator::difference_type														difference_type;
		typedef	size_t																					size_type;
		typedef	typename set::accessor																	key_accessor;
		typedef typename ft::redBlackTree<value_type, key_type, key_accessor, key_compare, Alloc>		tree;
		
		
		// **********************************************************************************
		// * 																	  			*
		// *								Member function									*
		// *																				*
		// **********************************************************************************
		
			// ! Constructor :
				//* Empty :
				explicit set (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) : _tree(), _less(comp), _alloc(alloc) {}
				// * range :
				template <class InputIterator>
				set (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type()) : _tree(), _less(comp), _alloc(alloc)
				{
					insert(first, last);
				}
				// * Copy constructor :
				set (const set& x) : _tree(), _less(), _alloc()
				{
					insert(x.begin(), x.end());
				}
			// ! operator= :
				// * operator= :
				set& operator= (const set& x)
				{
					if (this == &x)
						return *this;
					clear();
					insert(x.begin(), x.end());
					return *this;
				}
			//! Destructor :	
				~set(void)
				{
					clear();
				}
		// **********************************************************************************
		// * 																	  			*
		// *								Iterator										*
		// *																				*
		// **********************************************************************************
		
		//* Returns an iterator pointing to the first element in the vector.
			iterator begin() { return iterator(_tree.begin(), _tree.root());}
			const_iterator begin() const { return const_iterator(_tree.begin(), _tree.root());}
		//* Returns an iterator referring to the past-the-end element in the vector container.
		//? The past-the-end element is the theoretical element that would follow the last element in the vector.
		//? It does not point to any element, and thus shall not be dereferenced.
			iterator end() {return iterator(NULL, _tree.root());}
			const_iterator end() const{return const_iterator(NULL, _tree.root());}
		//* Returns a reverse iterator pointing to the last element in the vector.
		// ? https://en.cppreference.com/w/cpp/iterator/reverse_iterator
			reverse_iterator rbegin() {return (reverse_iterator(end()));}
			const_reverse_iterator rbegin() const {return (const_reverse_iterator(end()));}
		//* Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector.
			reverse_iterator rend(){ return(reverse_iterator(begin()));}
			const_reverse_iterator rend() const{ return(const_reverse_iterator(begin()));}

		// **********************************************************************************
		// * 																	  			*
		// *								Capacity										*
		// *																				*
		// **********************************************************************************
		
		// * Returns whether the set container is empty :
			bool empty() const {return (_tree.size() == 0);}
		//* Returns the number of elements in the set container :
			size_type size() const {return _tree.size();}
		//* Return maximum size :
			size_type max_size() const {return _tree.max_size();}

		// **********************************************************************************
		// * 																	  			*
		// *								Observers										*
		// *																				*
		// **********************************************************************************
		
		// * Returns a copy of the comparison object used by the container :
			key_compare key_comp() const {return _less;}
		// * Returns a copy of the comparison object used by the container :
			value_compare value_comp() const {return _less;}

		// **********************************************************************************
		// * 																	  			*
		// *								Modifiers										*
		// *																				*
		// **********************************************************************************
		
		// ! Insert :
			// * Single element :
				pair<iterator,bool> insert (const value_type& val)
				{
					return _tree.rb_insert(val);
				}
			// * With hint (the position) :
				iterator insert (iterator position, const value_type& val)
				{
					(void)position;
					return _tree.rb_insert(val).first;
				}
			// * Range :
				template <class InputIterator>
				void insert (InputIterator first, InputIterator last)
				{
					while (first != last)
					{
						_tree.rb_insert(*first);
						first++;
					}
				}
		// ! Erase :
			// * The function removes the element pointed by position :
			// ? This shall point to a valid and dereferenceable element.
			void erase (iterator position) { _tree.rb_delete(position.get_current()->data, true); }
			// * The function returns the number of elements erased :
			size_type erase (const key_type& k) { return _tree.rb_delete(k, true); }
			// * The function removes a range of elements :
			void erase (iterator first, iterator last)
			{
				while (first != last)
					erase(first++);
			}
		// ! Clear :
			// * clear Content :
			// void clear() {_tree.clear(*_tree.root());}
			void clear(void)
			{
				iterator start = begin();
				iterator end = this->end();

				erase(start, end);
			}
		
		// ! Swap :
			// * Exchanges the content of the container by the content of x,
			//  which is another set of the same type. Sizes may differ.
			void swap (set& x)
			{
				_tree.swap(x._tree);
				std::swap(_less, x._less);
				std::swap(_alloc, x._alloc);
			}
		
		// **********************************************************************************
		// * 																	  			*
		// *								Operations										*
		// *																				*
		// **********************************************************************************
		
		// ! find :
			//* Get iterator to element :
			iterator find (const key_type& k) { return iterator(_tree.find(*(_tree.root()), k), _tree.root());}
			const_iterator find (const key_type& k) const { return const_iterator(_tree.find(*(_tree.root()), k), _tree.root());}
		// ! count :
			//* Count elements with a specific key :
			size_type count (const key_type& k) const { return (_tree.find(*(_tree.root()), k) != NULL);}
		// ! lower_bound :
			//* Return iterator to lower bound :
			iterator lower_bound (const key_type& key) { return iterator(_tree.lower_bound(key), _tree.root());}
			const_iterator lower_bound (const key_type& key) const
			{ 
				return const_iterator(_tree.lower_bound(key), _tree.root());
			}
		// ! upper_bound
			// * eturns an iterator pointing to the first element in the container whose key is considered to go after k.
			iterator upper_bound (const key_type& k)
			{
				iterator it = lower_bound(k);
				if (it != end()){
					if (find(k) == it)
						it++;
				}
				return it;
			}

			const_iterator upper_bound (const key_type& k) const
			{
				const_iterator it = lower_bound(k);
				if (it != end()){
					if (find(k) == it)
						it++;
				}
				return it;
			}
			// * Returns the bounds of a range that includes all the elements in the container which have a key equivalent to k.
			pair<iterator,iterator>				equal_range (const key_type& key)
			{
				return ft::pair<iterator, iterator>(lower_bound(key), upper_bound(key));
			}
			
			pair<const_iterator,const_iterator>	equal_range (const key_type& key) const
			{
				return pair<const_iterator, const_iterator>((const_iterator)lower_bound(key), (const_iterator)upper_bound(key));
			}
			
		// **********************************************************************************
		// * 																	  			*
		// *								Allocator										*
		// *																				*
		// **********************************************************************************
		
		// * Returns a copy of the allocator object associated with the set :
			allocator_type get_allocator() const {return _alloc;}
		
		// private :
			tree			_tree;
			value_compare	_less;
			allocator_type	_alloc;
		private :
			class accessor
			{
				public :
				key_type operator() (value_type p) const
				{
					return p;
				}
			};
	};
	//! Non-member function overloads :
	template <class T, class Compare, class Alloc>
	void swap (set<T, Compare, Alloc>& x, set<T, Compare,  Alloc>& y)
	{
		x.swap(y); 
	}
	
	template <class T, class Compare, class Alloc>
	bool operator== (const set<T, Compare, Alloc>& lhs, const set<T, Compare, Alloc>& rhs)
	{
		if (lhs.size() != rhs.size())
			return (false);
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	}
	// * a != b <==> !(a == b)
	template <class T, class Compare, class Alloc>
	bool operator!= (const set<T, Compare, Alloc>& lhs, const set<T, Compare, Alloc>& rhs)
	{
		return !(lhs == rhs);
	}
	
	template <class T, class Compare, class Alloc>
	bool operator<  (const set<T, Compare, Alloc>& lhs, const set<T, Compare, Alloc>& rhs)
	{
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}
	// * a <= b <==> !(b < a)
	template <class T, class Compare, class Alloc>
	bool operator<= (const set<T, Compare, Alloc>& lhs, const set<T, Compare, Alloc>& rhs)
	{
		return (!(rhs < lhs));
	}
	// * a > b	<==> b < a
	template <class T, class Compare, class Alloc>
	bool operator> (const set<T, Compare, Alloc>& lhs, const set<T, Compare, Alloc>& rhs)
	{
		return (rhs < lhs);
	}
	//* a >= b	<==> !(a < b)
	template <class T, class Compare, class Alloc>
	bool operator>= (const set<T, Compare, Alloc>& lhs, const set<T, Compare, Alloc>& rhs)
	{
		return (!(lhs < rhs));
	}
}