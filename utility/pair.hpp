/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:13:08 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/28 20:41:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//***********************************************************************************
//*	- The class pair is provided to treat two values as a single unit.				*
//*	- The container classes map and multimap use pairs to manage their elements,	*
//*		their elements, which are key/value pairs.									*
//*																					*
//*																					*
//***********************************************************************************

#pragma once
#include <iostream>

namespace ft
{
	template <class T1, class T2>
	struct pair
	{
		//! Member types :
			typedef T1 first_type;
			typedef T2 second_type;
		//! Member variables
			T1 first;
			T2 second;
		//! Member functions
			//* Constructors :
			//? 1- default constructor :
				pair() : first(), second() {}
			//? 2- copy constructor :
				template<class U, class V>
				pair (const pair<U, V>& pr) : first(pr.first), second(pr.second) {}
			//? 3- initialization constructor :
				pair (const first_type& a, const second_type& b) : first(a), second(b) {}
		//! operator= :
			pair& operator= (const pair& pr) {first = pr.first; second = pr.second; return *this;}
	};
		//! Non-member function overloads :
	template <class T1, class T2>
	  bool operator== (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
	  	{ return( (lhs.first == rhs.first) && (lhs.second == rhs.second)); }
	template <class T1, class T2>
	  bool operator!= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
	  	{ return(!(lhs == rhs)); }
	//?	Pour comparer un pair, le premier elt est prioritaire. Donc,
	//? si le premier elt(de l 'objet lhs) est inferieur au deuxieme elt(rhs) => lhs < rhs
	//? sinon si ils sont equivalent, on compare les deuxieme elt du pair.
	template <class T1, class T2>
	  bool operator<  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
	  	{ return lhs.first < rhs.first || (!(rhs.first < lhs.first) && lhs.second < rhs.second); }
	template <class T1, class T2>
	  bool operator<= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
	  	{ return !(rhs < lhs); }
	template <class T1, class T2>
	  bool operator>  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
	  	{ return rhs < lhs; }
	template <class T1, class T2>
	  bool operator>= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
	  { return !(lhs < rhs); }
	template <typename T1, typename T2>
		std::ostream& operator<< (std::ostream& os, pair<T1, T2> const &p)
		{os << p.first << " " << p.second; return os; }                                                                                               
}