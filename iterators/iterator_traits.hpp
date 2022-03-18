/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 06:30:03 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/18 08:21:59 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

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
			typedef ptrdiff_t							difference_type;
			typedef T									value_type;
			typedef T*									pointer;
			typedef T&									reference;
			typedef std::random_access_iterator_tag		iterator_category;	
	};

	template <typename T> 
	struct iterator_traits<const T*>
	{
			typedef ptrdiff_t							difference_type;
			typedef T									value_type;
			typedef const T*							pointer;
			typedef const T&							reference;
			typedef std::random_access_iterator_tag		iterator_category;	
	};
}