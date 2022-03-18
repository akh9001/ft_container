#pragma once
#include "../iterators/iterator.hpp"

namespace ft
{
	//! Distance :
	//? https://en.cppreference.com/w/cpp/iterator/distance
	//*******************************************************************
	//*																	*
	//*								distance							*
	//*																	*
	//*******************************************************************
	template<class InputIterator>
	typename iterator_traits<InputIterator>::difference_type
		distance (InputIterator first, InputIterator last)
	{
		return (calcul_distance(first, last, typename iterator_traits<InputIterator>::iterator_category()));
	}

	template<class InputIterator>
	typename iterator_traits<InputIterator>::difference_type
	calcul_distance(InputIterator first, InputIterator last, typename std::random_access_iterator_tag)
	{
		return (last - first);
	}
	
	template<class InputIterator>
	typename iterator_traits<InputIterator>::difference_type
	calcul_distance(InputIterator first, InputIterator last, typename std::input_iterator_tag)
	{
		typename iterator_traits<InputIterator>::difference_type distance = 0;
		while (first != last)
		{
			first++;
			distance++;
		}
		return (distance);
	}
}