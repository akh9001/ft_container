#include <iostream>
// #include <vector>

// class Foo
// {
// 	private:
// 	int m_foo;

// 	public:
// 	// single parameter constructor, can be used as an implicit conversion
// 	Foo (int foo) : m_foo (foo) {}
// 	// explicit Foo (int foo) : m_foo (foo) {}

// 	int GetFoo () { return m_foo; }
// };

// void DoBar (Foo foo)
// {
//   int i = foo.GetFoo ();
// }
// int	main(int ac, char **argv)
// {
//   DoBar (42);
//   std::vector<int> arr;

//   return (0);
// }

// // bad_alloc example
// #include <iostream>     // std::cout
// #include <new>          // std::bad_alloc
// int main () {
//   try
//   {
//     int* myarray= new int[10000];
// 	throw std::bad_alloc();
//   }
//   catch (std::bad_alloc& ba)
//   {
//     std::cerr << "bad_alloc caught: " << ba.what() << '\n';
//   }
//   return 0;
// }

// #include <iostream>
// #include<vector>

// template <typename T>
// struct is_pointer {
// 	static const bool value = false;
// };

// template <typename T>
// struct is_pointer<T*> {
// 	static const bool value = true;
// };

// template <typename T>
// struct is_integral {
// 	static const bool value = false;
// };

// template <>
// struct is_integral<int>:: false_type {};

// template <>
// struct is_integral<long> {
// 	static const bool value = true;
// };

// template <>
// struct is_integral<long long> {
// 	static const bool value = true;
// };

// template <>
// struct is_integral<unsigned int> {
// 	static const bool value = true;
// };

// template <typename T1, typename T2>
// struct is_same {
// 	static const bool value = false;
// };


// template <typename T>
// struct is_same<T, T> {
// 	static const bool value = true;
// };

// int fn()
// {

// }


// int main()
// {
// 	std::vector<int> a;
	
// }

// iterator_traits example
int a(std::false_type)
{
	std::cout << "False\n";
	return 6;
}

char a(std::true_type)
{
	std::cout << "True\n";
	return 'a';
}


#include <iostream>     // std::cout
#include <iterator>     // std::iterator_traits
#include <typeinfo>     // typeid

int main() {
	// typedef std::iterator_traits<int*> traits;
	// std::cout << typeid(traits::iterator_category).name() << std::endl;
	// std::cout << typeid(std::random_access_iterator_tag).name() << std::endl;
	// if (typeid(traits::iterator_category)==typeid(std::random_access_iterator_tag))
	// 	std::cout << "int* is a random-access iterator";

	a(std::is_integral<int>());
	std::distance()
		
	
  return 0;
}