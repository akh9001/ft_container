/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:00:34 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/20 02:26:27 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "vector.hpp"

// * Stack : Stacks are a type of container adaptor, specifically designed to operate in a LIFO context.
// * elements are inserted and extracted only from one end of the container.
// ? Container adaptors : Container adaptors provide a different interface for sequential containers. 
// *
namespace ft
{
	template <class T, class Container = vector<T> >
	class stack
	{
		public :
		//***********************************************************************************
		//*																					*
		//*							member type												*
		//*		value_type	: T.															*
		//*		Container	: container_type is the type of the underlying container type.	*
		//*		size_t		: size_t.														*
		//***********************************************************************************
			typedef	T										value_type;
			typedef	Container								container_type;
			typedef	size_t									size_type;
			
		//***************************************************************************************
		//*																						*
		//*							Member functions											*
		//*																						*
		//*		1- Constructor.																	*
		//*		2- empty : Test whether container is empty.										*
		//*		3- size	 : Return size.															*
		//*		4- top	 : Returns a reference to the top element in the stack (last element).	*
		//*		5- push	 : Inserts a new element at the top of the stack.						*
		//*		6- pop	 : Remove top element (last element).									*
		//***************************************************************************************
		//! 1- Constructor :
			explicit stack (const container_type& ctnr = container_type()) : c(ctnr) {} //  c(ctnr)
		//! 2- empty :
			bool empty() const { return(c.empty()); }
		//! 3- size :
			size_type size() const { return(c.size()); }
		//! 4- top :
      		value_type& top() { return(c.back()); }
			const value_type& top() const { return(c.back()); }
		//! 5- push :
			void push (const value_type& val) { return(c.push_back(val));}
		//! 6- pop	:
			void pop() { return(c.pop_back());}
		template <class T1, class Container1>
		friend	bool operator== (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
		template <class T1, class Container1>
  		friend	bool operator!= (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
		template <class T1, class Container1>
		friend	bool operator<  (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
		template <class T1, class Container1>
		friend	bool operator<= (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
		template <class T1, class Container1>
		friend	bool operator>  (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
		template <class T1, class Container1>
		friend	bool operator>= (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
		
		protected :
			Container	c;
	};
		//***********************************************************************************
		//*																					*
		//*							Non-member function overloads							*
		//*																					*
		//***********************************************************************************
		
		template <class T1, class Container1>
		bool operator== (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs)
			{ return (lhs.c == rhs.c); }
		template <class T1, class Container1>
  		bool operator!= (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs)
		  	{ return (lhs.c != rhs.c); }
		template <class T1, class Container1>
		bool operator<  (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs)
			{ return (lhs.c < rhs.c); }
		template <class T1, class Container1>
		bool operator<= (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs)
			{ return (lhs.c <= rhs.c); }
		template <class T1, class Container1>
		bool operator>  (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs)
			{ return (lhs.c > rhs.c); }
		template <class T1, class Container1>
		bool operator>= (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs)
			{ return (lhs.c >= rhs.c); }
}