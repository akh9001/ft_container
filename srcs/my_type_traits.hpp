#pragma once

namespace ft
{
	// * This template is designed to provide compile-time constants as types. 
	// ? A compile-time constant is a value that is computed at the compilation-time.
	template <class T, T v>
	struct integral_constant 
	{
		static const T value = v;
		typedef T value_type;
		typedef integral_constant<T,v> type;
		const operator T()
		{ 
			return v; 
		}
	};
	typedef integral_constant<bool,false> false_type;
}