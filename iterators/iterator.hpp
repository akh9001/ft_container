/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:15:16 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/22 13:19:38 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iterator_traits.hpp"

//? Lvalues and rvalues: a friendly definition : https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c

namespace ft
{
	template <typename _Iter>
	class random_access_iterator
	{
		public:
			typedef typename iterator_traits<_Iter>::difference_type   		difference_type;		//* ptrdiff_t		
			typedef typename iterator_traits<_Iter>::value_type        		value_type;				//* T
			typedef typename iterator_traits<_Iter>::pointer           		pointer;				//* T*
			typedef typename iterator_traits<_Iter>::reference         		reference;				//* T&
			typedef typename iterator_traits<_Iter>::iterator_category 		iterator_category;		//* T1 - T2
		
		//! getter function
		pointer	base(void) const{ return(__current);}
		//! Constructors :
		
		random_access_iterator(void) : __current(_Iter()) {}
		random_access_iterator(pointer ptr) : __current(ptr) {}
		template<typename __Iter> //! it should be a template so the instantiation of an iterator<T> with an iterator<const T> would work 
		random_access_iterator(const random_access_iterator<__Iter> &it){*this = it;}
		template<typename __Iter>
		random_access_iterator&			operator=(const random_access_iterator<__Iter> &rhs) { __current = rhs.base(); return(*this);}
		
		//! operators overload :
			//* increment and decrement operators :
		random_access_iterator&			operator++(void) {++__current; return(*this);} //* prefix has no parameter
		random_access_iterator			operator++(int) {return random_access_iterator(__current++);} //?{random_access_iterator temp(*this); this->__current++; return(temp);} //* postfix has an int parameter
		random_access_iterator&			operator--(void) {--__current; return(*this);} //* prefix has no parameter
		random_access_iterator			operator--(int) { return random_access_iterator(__current--);}//?{random_access_iterator temp(*this); this->__current--; return(temp);} //* postfix has an int parameter
			//* unary operators :
		//?random_access_iterator	&operator*() {if (__current) return *__current;}; => wash 5assni protecti la7zaak 
		reference						operator*(void) const {return *__current;}
		pointer							operator->(void) const {return __current;}; // std::vector<std::string> test(9, "lol"); std::vector<std::string>::iterator it = test.begin(); it->append();"if the underline container were an int there will be no function to call"
		reference						operator[](const difference_type& n) const {return (__current[n]);}
		random_access_iterator			operator+(const difference_type& n) const {return random_access_iterator(__current + n);}//?{random_access_iterator tmp; tmp.__current = __current + n; return tmp;}
		random_access_iterator			operator-(const difference_type& n) const {return random_access_iterator(__current - n);}//?{random_access_iterator tmp; tmp.__current = __current - n; return tmp;}
		random_access_iterator&			operator+=(const difference_type& n) {__current += n; return *this;}
		random_access_iterator&			operator-=(const difference_type& n) {__current -= n; return *this;}

		private:
			pointer	__current;
			random_access_iterator(const reference curr) : __current(curr) {}
	};

	template <typename _IterL, typename _IterR> 
	bool operator==(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.base() == rhs.base()); }
	template <typename _IterL, typename _IterR> 
	bool operator!=(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.base() != rhs.base()); }
	template <typename _IterL, typename _IterR> 
	bool operator<(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.base() < rhs.base()); }
	template <typename _IterL, typename _IterR> 
	bool operator>(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.base() > rhs.base()); }
	template <typename _IterL, typename _IterR> 
	bool operator<=(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.base() <= rhs.base()); }
	template <typename _IterL, typename _IterR> 
	bool operator>=(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR>& rhs){ return (lhs.base() >= rhs.base()); }
	template <typename _Iter> 
	random_access_iterator<_Iter> operator+(const typename random_access_iterator<_Iter>::difference_type& n, const random_access_iterator<_Iter>& rhs){ return (n + rhs.base()); }
	template <typename _IterL, typename _IterR>
	typename random_access_iterator<_IterL>::difference_type operator-(const random_access_iterator<_IterL>& lhs, const random_access_iterator<_IterR> & rhs){return (lhs.base() - rhs.base());}

}
// typename random_access_iterator<key >::difference_type is okay to replace it by ptrdiff_t ??