/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_pair.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 07:54:37 by akhalidy          #+#    #+#             */
/*   Updated: 2022/03/21 08:30:40 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "pair.hpp"

// * make_pair : template function enables you to create a value pair without
// * writing the types explicitly.
//! Note that an expression that has the explicit type description has an advantage because the resulting type of the pair is clearly defined. For example, the expression
//! std::pair<int,float>(42,7.77)
//! does not yield the same as std::make_pair(42,7.77)
//! The latter creates a pair that has double as the type for the second value
namespace ft
{
	template <class T1, class T2>
	pair<T1, T2> make_pair (T1 x, T2 y)
	{	  
		return (pair<T1, T2>(x, y));
	}
}
