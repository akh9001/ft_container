// #include <iostream>
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
// int a(std::false_type)
// {
// 	std::cout << "False\n";
// 	return 6;
// }

// char a(std::true_type)
// {
// 	std::cout << "True\n";
// 	return 'a';
// }


// #include <iostream>     // std::cout
// #include <iterator>     // std::iterator_traits
// #include <typeinfo>     // typeid

// int main() {
// 	// typedef std::iterator_traits<int*> traits;
// 	// std::cout << typeid(traits::iterator_category).name() << std::endl;
// 	// std::cout << typeid(std::random_access_iterator_tag).name() << std::endl;
// 	// if (typeid(traits::iterator_category)==typeid(std::random_access_iterator_tag))
// 	// 	std::cout << "int* is a random-access iterator";

// 	a(std::is_integral<int>());
// 	std::distance()
		
	
//   return 0;
// }

// template <class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
// class iterator
// {
// 	public :
// 		typedef T         value_type;
// 		typedef Distance  difference_type;
// 		typedef Pointer   pointer;
// 		typedef Reference reference;
// 		typedef Category  iterator_category;
// };

// std::iterator example
#include <iostream>     // std::cout
#include <iterator>     // std::iterator, std::input_iterator_tag
#include <vector>
// class MyIterator : public iterator<std::input_iterator_tag, int>
// {
// 	  int* p;
// 	public:
// 	  MyIterator(int* x) :p(x) {}
// 	  MyIterator(const MyIterator& mit) : p(mit.p) {}
// 	  MyIterator& operator++() {++p;return *this;}
// 	  MyIterator operator++(int) {MyIterator tmp(*this); operator++(); return tmp;}
// 	  bool operator==(const MyIterator& rhs) const {return p==rhs.p;}
// 	  bool operator!=(const MyIterator& rhs) const {return p!=rhs.p;}
// 	  int& operator*() {return *p;}
// };

// int main () {
//   int numbers[]={10,20,30,40,50};
//   MyIterator from(numbers);
//   MyIterator until(numbers+5);
// //   for (MyIterator it=from; it!=until; it++)
// //     std::cout << *it << ' ';
// //   std::cout << '\n';
// 	std::cout << std::iterator_traits<MyIterator>::iterator_category() << std::endl;
//   return 0;
// }

// struct client
//     { int a; };

// struct proxy {
//     client *target;
//     client *operator->() const
//         { return target; }
// };

// struct proxy2 {
//     proxy *target;
//     proxy &operator->() const
//         { return * target; }
// };

// void f() {
//     client x = { 3 };
//     proxy y = { & x };
//     proxy2 z = { & y };

//     std::cout << x.a << " " << y->a << " " << z->a; // print "333"
// }
// int main()
// {
// 	f();
// 	return (0);
// }

// int main ()
// {
// 	std::vector<int>::iterator it;
// 	// std::vector<int>::iterator beg;
// 	// std::vector<int>	vec(3, -1);
// 	std::vector<int>	a(3,2);
// 	// int	k;

// 	// it = a
// 	// beg = vec.begin();
// 	// k = *beg;
// 	// k++;
// 	// it = beg;
// 	// *it++ += 1; 
// 	// *it++ += 2;
// 	// *it += 3;
// 	// std::cout << k << std::endl;
// 	// for (int i = 0; i < 3; i++)
// 	// 	std::cout << *(beg + i) << std::endl;
// 	return (0);
// }
struct Y 
{
  void f() { };
};

struct X 
{
	Y* ptr;
	Y* operator->() {return ptr;};
};


class abc
{
	public:
	int a ;
	int b;
	abc(){}
	~abc(){}
};
class base
{
	public :
	int a;

	base(){}
	~base(){}
	base &operator*()
	{
		std::cout << "test " << std::endl;
		return *this;
	}
};
int main()
{
//   X x;
//   x->f();
// std::string *a;
// a->at(7);
std::vector<std::string> test(9, "lol");
std::vector<std::string>::iterator it = test.begin();
*it = "15";
std::cout << *it << std::endl;
*(it + 1) = "16";
*it++;
std::cout << *(5 + it) << std::endl;
// operator(int)
// it->append();
	// base a;
	// std::cout << *a << std::endl;
}