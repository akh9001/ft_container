/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexicographical_compare.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 02:17:13 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/17 03:30:00 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft
{
	//*******************************************************************
	//*																	*
	//*						lexicographical_compare						*
	//*																	*
	//*******************************************************************
	// ? Return : true (size de A < size B and all elt are equal or il existe un elt de A < B)
	// * true : if the first range compares lexicographically less than the second : a < b.
	// * false : otherwise (including when all the elements of both ranges are equivalent) : a > b.

	template <class InputIterator1, class InputIterator2>
	bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
		InputIterator2 first2, InputIterator2 last2)
	{
		while (first1!=last1)
		{
			if (first2 == last2 || *first2 < *first1) // si j arrive a la fin du dexieme range, alors A > B ou bien je trouve un elt de b < à elt de a.
				return false;
			else if (*first1 < *first2) // si je trouve un elt de A < B, donc a < b.
				return true;
			++first1; ++first2; // tant que first1 == first2, je passe au elt suivant
		}
		return (first2 != last2); // if first2 != last2 that means that range B is greater than range A  => true
	}

	template <class InputIterator1, class InputIterator2, class Compare>
	bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1,
		InputIterator2 first2, InputIterator2 last2, Compare comp)
	{
		while (comp(first1,last1) || comp(last1,first1))
		{
			if ((!comp(first2,last2) && !comp(last2,first2)) || comp(*first2, *first1))
				return false;
			else if (comp(*first1, *first2))
				return true;
			++first1; ++first2;
		}
		return ((comp(first2,last2) || comp(last2,first2)));
	}
}