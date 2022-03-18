#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
// advance example
#include <iterator>     // std::advance
#include <list>         // std::list
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#include "srcs/vector.hpp"
#define EQUAL(x) ((x) ? (std::cout << "\033[1;32mAC\033[0m\n") : (std::cout << "\033[1;31mWA\033[0m\n"))
// int main ()
// {
	// std::vector<int> myvec;
	// for (int i = 0; i < 10; i++) myvec.push_back (i * 10);

	// std::vector<int>::iterator it = myvec.begin();

	// std::advance (it,5);

	// std::cout << "The sixth element in myvec is: " << *it << '\n';
	// int i;
	// for ( i = 0; i < 10; i++) std::cout << i << std::endl; std::cout << std::endl;
	// for (i ; i < 20; ++i) std::cout << i << std::endl;
	// return 0;
// }
// // * resizing vector
// #include <iostream>
// #include <vector>
// int main ()
// {
// //   std::vector<int> myvector;
// // //   std::vector<str÷> myvector;

// //   // set some initial content:
// //   for (int i=1;i<5;i++) myvector.push_back(i);

// // 	std::cout << "myvector capacity" << myvector.size() << std::endl;
// //   myvector.resize(100);
// // //   myvector.resize(8,100);
// // //   myvector.resize(12);
// // // std::cout <<"hada   "<<  myvector[5] << std::endl;
// // // myvector.push_back(9000);
// // // std::cout <<"hada  2 ==>  "<<  myvector[5] << std::endl;

// // 	std::cout << "myvector capacity" << myvector.size() << std::endl;
// // 	std::cout << "myvector contains:";
// // 	// for (int i=0;i<myvector.size();i++)
// // 	//   std::cout << ' ' << myvector[i];
// // 	std::cout << '\n';

// 	std::allocator<int> g;
// 	int  * a =  g.allocate(10);
// 	g.construct(a, 500);
// 	// a[0] = "500";
// 	// std::cout << a[0] << std::endl;
// 	return 0;
// }

// int main()
// {

// 	std::vector<const int> v(10,4);
// 	// std::vector<const int>::iterator it(v.begin());
// 	v.resize(4);
// 	std::cout << v[0] << std::endl;



	// ft::vector<int> v(4, 18);
	// ft::vector<int>::iterator beg = v.begin();
	// ft::vector<int>::iterator end = v.end();
	// std::cout << "Capacity :" << v.capacity() <<std::endl;
	// std::cout << *beg <<std::endl;
	// end -= 1;
	// *end = 55;
	// std::cout << *end <<std::endl;
	// try
	// {
	// 	v.resize(v.max_size() + 1, 44);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// v.resize(100, 44);
	// std::cout << "Capacity :" << v.capacity() <<std::endl;
	// beg = v.begin();
	// end = v.end();
	// std::cout << *beg <<std::endl;
	// std::cout << *--end <<std::endl;
	// for(ft::vector<int>::iterator it = beg; it != end; ++it)
	// 	std::cout << *it <<std::endl;
	// std::cout << v.capacity() <<std::cout;
// 	return(0);
// }
// vector::empty
// #include <iostream>
// #include <vector>

// int main ()
// {
//   ft::vector<int> myvector;
//   std::cout << "the vector is " << (myvector.empty() ? "Empty" : "NOT EMPTY")<< '\n';
// //   int sum (0);

// //   for (int i=1;i<=10;i++) myvector.push_back(i);
// 	ft::vector<int> v(4, 18);
//   std::cout << "the vector is " << (v.empty() ? "Empty" : "NOT EMPTY")<< '\n';
// //   while (!myvector.empty())
// //   {
// //      sum += myvector.back();
// //      myvector.pop_back();
// //   }
// //   std::cout << "total: " << sum << '\n';

//   return 0;
// }
// resizing vector

// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;

//   // set some initial content:
//   for (int i=1;i<10;i++) myvector.push_back(i);

//   std::cout << "Capacity :" << myvector.capacity() <<std::endl;
//   myvector.resize(5);
//   std::cout << "Capacity :" << myvector.capacity() <<std::endl;

//   myvector.resize(8,100);
//   std::cout << "Capacity :" << myvector.capacity() <<std::endl;
//   myvector.resize(100);
//   std::cout << "Capacity :" << myvector.capacity() <<std::endl;
//   myvector.resize(5);
//   std::cout << "Capacity :" << myvector.capacity() <<std::endl;

// 	std::cout << "myvector contains:";
// 	for (int i = 0 ; i < myvector.size(); i++)
// 		std::cout << ' ' << myvector[i];
// 	std::cout << '\n';
// 	return 0;
// }
// vector::reserve
// #include <iostream>
// #include <vector>

// std::string &function(std::string *ptr, int i)
// {
// 	return(ptr[i]);
// } 
// int main (void)
// {
// 	// std::string colours[4] = { "Blue", "Red", "Orange", "Yellow" };
// 	// std::string &colour = function(colours, 2);

// 	// colour = "black";
// 	// std::cout << colour << std::endl;
// 	// std::cout << colours[-2] << std::endl;
//   std::vector<int>::size_type sz;

//   std::vector<int> foo(10, 12);
//   sz = foo.capacity();
//   std::cout << "making foo grow:\n";
//   std::cout << foo.max_size() << std::endl;
//   std::cout << foo[4611686018427387905] << std::endl;
//   std::cout << "Initial capacity :" << foo.capacity() << std::endl;
// 	// for (int i=0; i<60; ++i) 
// 	// {
// 	// 	foo.push_back(i);
// 	// 	// if (sz!=foo.capacity())
// 	// 	// {
// 	// 	// 	sz = foo.capacity();
// 	// 	// 	std::cout << "capacity changed: " << sz << '\n';
// 	// 	// }
// 	// }
// 	// foo.reserve(100);
// 	// std::cout << "capacity changed: " << foo.capacity() << '\n';
// 	// for (int i=0; i<100; ++i)
// 	// {
// 	// 	std::cout << foo[i] << '\n';
// 	// // }
// 	// std::cout << "capacity changed: " << foo.size() << '\n';
// //   std::vector<int> bar;
// //   sz = bar.capacity();
// //   bar.reserve(100);   // this is the only difference with foo above
// //   std::cout << "making bar grow:\n";
// //   for (int i=0; i<100; ++i) {
// //     bar.push_back(i);
// //     if (sz!=bar.capacity()) {
// //       sz = bar.capacity();
// //       std::cout << "capacity changed: " << sz << '\n';
// //     }
// //   }
//   return 0;
// }

// vector::operator[]
// #include <iostream>
// #include <vector>

// int main ()
// {
//   ft::vector<int> myvector (10);   // 10 zero-initialized elements

//   ft::vector<int>::size_type sz = myvector.size();

// //   assign some values:
//   for (unsigned i=0; i<sz; i++) myvector[i]=i;

// //   reverse vector using operator[]:
//   for (unsigned i=0; i<sz/2; i++)
//   {
//     int temp;
//     temp = myvector[sz-1-i];
//     myvector[sz-1-i]=myvector[i];
//     myvector[i]=temp;
//   }

//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<sz; i++)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';

//   return 0;
// }

// vector::at
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector (10);   // 10 zero-initialized ints

//   // assign some values:
//   myvector.push_back(44);
//   for (unsigned i=0; i<myvector.size(); i++)
//     myvector.at(i)=i;
// 	try
// 	{
// 		  std::cout << "size : " << myvector.size() << " Capacity : " << myvector.capacity() << std::endl;
// 		std::cout << myvector.at(myvector.size() - 1) << std::endl;
// 	}
// 	catch(std::exception &e)
// 	{
// 		  std::cout << e.what() << std::endl;
// 	}
//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size(); i++)
//     std::cout << ' ' << myvector.at(i);
//   std::cout << '\n';

//   return 0;
// }

// out_of_range example
// #include <iostream>       // std::cerr
// #include <stdexcept>      // std::out_of_range
// #include <vector>         // std::vector

// int main (void) {
//   ft::vector<int> myvector(10);
//   try {
//     myvector.at(20)=100;      // vector::at throws an out-of-range
//   }
//   catch (const std::out_of_range& oor) {
//     std::cerr << "Out of Range error: " << oor.what() << '\n';
//   }
//   return 0;
// }
// vector::front
// #include <iostream>
// #include <vector>

// int main ()
// {
//   ft::vector<int> myvector(2);

// //   myvector.push_back(78);
// //   myvector.push_back(16);
// 	myvector[0] = 78;
// 	myvector.back() = 16;
// 	myvector.front() -= myvector.back();

// //   // now front equals 78, and back 16

// //   myvector.front() -= myvector.back();

//   std::cout << "myvector.front() is now " << myvector.front() << '\n';
//   std::cout << "myvector.back() is  " << myvector.back() << '\n';

//   return 0;
// }
// vector::back
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;

//   myvector.push_back(10);

//   while (myvector.back() != 0)
//   {
//     myvector.push_back ( myvector.back() -1 );
//   }

//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size() ; i++)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';

//   return 0;
// }

// vector::push_back
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;
//   int myint;

//   std::cout << "Please enter some integers (enter 0 to end):\n";

//   do {
//     std::cin >> myint;
//     myvector.push_back (myint);
//   } while (myint);

//   std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";
//   std::cout << "myvector 's capacity is " << myvector.capacity() << std::endl;
//   std::cout << "myvector contains:";
//   for (unsigned i=0; i< myvector.size() ; i++)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';
//   return 0;
// }

// vector::pop_back
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector;
//   int sum (0);
//   myvector.push_back (100);
//   myvector.push_back (200);
//   myvector.push_back (300);
//   std::cout << "The size of myvector is  " << myvector.size() << '\n';
//   std::vector<int>::iterator beg = myvector.begin();
//   std::vector<int>::iterator end = myvector.end();

//   while (!myvector.empty())
//   {
//     sum+=myvector.back();
//     myvector.pop_back();
//   }
//   myvector.push_back (100);
// //   myvector.push_back (12);
//   myvector[2] = 12;
// //   beg = myvector.begin();
// //   end = myvector.end();
// //   for (; beg != end; beg++)
// // for(int i= 1; i < 3; i++)
// 	// std::cout << "jilali " <<  << std::endl;
// 	// std::cout << "jilali " << *beg << std::endl;
//   std::cout << "The elements of myvector add up to " << sum << '\n';
//   std::cout << "The size of myvector is  " << myvector.size() << '\n';
//   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';

//   return 0;
// }

// erasing from vector
// #include <iostream>
// #include <vector>

// int main ()
// {
// 	ft::vector<int> myvector;

// 	//* set some values (from 1 to 10)
// 	for (int i=1; i<=10; i++) myvector.push_back(i);
// //   std::cout << "The size of myvector is  " << myvector.size() << '\n';
// //   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';
// 	//* erase the 6th element
// 	myvector.erase (myvector.begin()+5);
// //   std::cout << "The size of myvector is  " << myvector.size() << '\n';
// //   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';
// 	//* erase the first 3 elements:
// 	myvector.erase (myvector.begin(),myvector.end());
//   std::cout << "The size of myvector is  " << myvector.size() << '\n';
//   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';
// 	std::cout << "myvector contains:";
// 	for (unsigned i=0; i<myvector.size(); ++i)
// 		std::cout << ' ' << myvector[i];
// 	std::cout << '\n';

// 	return 0;
// }

// clearing vectors
// #include <iostream>
// #include <vector>

// int main ()
// {
//   ft::vector<int> myvector;
//   myvector.push_back (100);
//   myvector.push_back (200);
//   myvector.push_back (300);

//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size(); i++)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';
//   std::cout << "The size of myvector is  " << myvector.size() << '\n';
//   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';
//   myvector.clear();
//     std::cout << "The size of myvector is  " << myvector.size() << '\n';
//   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';
//   myvector.push_back (1101);
//   myvector.push_back (2202);
//   std::cout << "The size of myvector is  " << myvector.size() << '\n';
//   std::cout << "The capacity of myvector is  " << myvector.capacity() << '\n';
//   std::cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size(); i++)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';

//   return 0;
// }

// inserting into a vector
// #include <iostream>
// #include <vector>
// #include <list>

// template <typename T>
// void write_vector(const ft::vector<T>& v)
// {
//    std::cout << "The numbers in the vector are: " << std::endl;
// //    std::cout << v 
// //    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
// }

// void comp(int num)
// {
// 	std::cout << "yes" << std::endl;
// }

// void comp(char notnum)
// {
// 	std::cout << "no" << std::endl;
// }

// void contructor()
// {
// 	comp(this->iterator::iterator_category);
// }
// void algorithm_signed  (int i) { std::cout << "T is int, include algorithm_signed()" << std::endl; } 

// void algorithm_unsigned(unsigned u) { std::cout << "T is unsigned int, include algorithm_unsigned()" << std::endl; } 

// template <typename T>
// void algorithm(T t)
// {
//     if (std::is_signed<T>::value)
//         algorithm_signed(t);
//     else
//     if (std::is_unsigned<T>::value)
//         algorithm_unsigned(t);
//     else
//         static_assert(std::is_signed<T>::value || std::is_unsigned<T>::value, "Must be signed or unsigned!");
// }
// #include <iostream>

// class A
// {
// 	static int count;
// 	public :
// 	int			_pos;
// 	A(int n): _pos(n){count++; std::cout << "A::constructor." << std::endl;}
// 	A(const A& arg)
// 	{
// 		_pos = arg._pos;
// 		count++;
// 		std::cout << "A::COPY " << _pos << std::endl;
// 	}
// 	A& operator=(const A& src)
// 	{
// 		_pos = src._pos;
// 		count++;
// 		std::cout << "A::Assign " << _pos << std::endl;
// 		return *this;
// 	}
// 	~A(){count = 0; std::cout << _pos << " A::destructor." << std::endl;}

// };
// std::ostream& operator<<(std::ostream& os, const A& dt)
// {
// 	os << dt._pos;
// 	return os;
// }
// int A::count = 0;
// int main ()
// {
// 	// std::list<int> li(4, 100);
// 	// ft::vector<int> vi(li.begin(), li.end());
// 	// std::istream_iterator<int> begin(std::cin), end;
// 	// ft::vector<int> v(begin, end);
// 	// int yes = 11;
// 	// comp(11);
// 	// write_vector(v);
// 	//  try {

// 	// {
// 	// 	ft::vector<int> myvector (3,100);
// 	// 	myvector.push_back(42);
// 	// 	ft::vector<int>::iterator it;
// 	// 	ft::vector<int> myvec ( myvector.begin()+3, myvector.begin() + 4);
// 	// 	std::cout << "myvector contains:";
// 	// 	for (it=myvector.begin(); it != myvector.end(); it++)
// 	// 	std::cout << ' ' << *it;
// 	// 	std::cout << '\n';
// 	// 	std::cout << "myvector contains:";
// 	// 	for (it=myvec.begin(); it != myvec.end(); it++)
// 	// 	std::cout << ' ' << *it;
// 	// 	std::cout << '\n';
// 	// }
// 	//* constructor
// 	// {
// 	// 	std::istream_iterator<int> start(std::cin);
// 	// 	std::istream_iterator<int> end;
		
// 	// 	const ft::vector<int> v(start, end);

// 	// 	for (size_t i = 0; i < v.size(); i++)
// 	// 		std::cout << v[i] << ' ';
// 	// 	std::cout << std::endl;
// 	// }
// 	{
// 	// *vector assign

// 	// 	std::vector<int> first;
// 	// 	std::vector<int>::iterator it;
// 	// 	std::vector<int> second;
// 	// 	std::vector<int> third;

// 	// first.assign (7,100);             // 7 ints with a value of 100
// 	// 	std::cout << "myvector contains:";
// 	// 	for (it= first.begin(); it != first.end(); it++)
// 	// 		std::cout << ' ' << *it;
// 	// 	std::cout << "\n Capacity : " << first.capacity() << ", Size : " << first.size() << '\n';
// 	// first.assign (9,12);             // 7 ints with a value of 100
// 	// 	std::cout << "myvector contains:";
// 	// 	for (it= first.begin(); it != first.end(); it++)
// 	// 		std::cout << ' ' << *it;
// 	// 	std::cout << "\n Capacity : " << first.capacity() << ", Size : " << first.size() << '\n';
// 	// first.assign (2,42);             // 7 ints with a value of 100
// 	// 	std::cout << "myvector contains:";
// 	// 	for (it= first.begin(); it != first.end(); it++)
// 	// 		std::cout << ' ' << *it;
// 	// 	std::cout << "\n Capacity : " << first.capacity() << ", Size : " << first.size() << '\n';
// 	// 	it=first.begin()+1;

// 	// 	second.assign (first.begin(),first.end()-1); // the 5 central values of first

// 	// 	int myints[] = {1776,7,4};
// 	// 	third.assign (myints,myints+3);   // assigning from array.

// 	// 	std::cout << std::endl << "Size of first: " << int (first.size()) << '\n';
// 	// 	std::cout << "Size of second: " << int (second.size()) << '\n';
// 	// 	for (it= second.begin(); it != second.end(); it++)
// 	// 		std::cout << ' ' << *it;
// 	// 	std::cout << std::endl << "Size of third: " << int (third.size()) << '\n';
// 	// 	for (it= third.begin(); it != third.end(); it++)
// 	// 		std::cout << ' ' << *it;

// 		//*Does the object get destructed when they are replaced on vector;
// 		// std::vector<A> T;
// 		// //T.reserve(5);
// 		// A a1(1), a2(2), a3(3);
// 		// T.push_back(a1);
// 		// std::cout << GREEN << "chi7aja" << std::endl;
// 		// T.push_back(a2);
// 		// std::cout << GREEN << "chi7aja" << std::endl;
// 		// T.push_back(a3);

// 		// for (int i = 0; i < T.size(); i++)
// 		// 	std::cout << GREEN << T[i]._pos << std::endl;
// 		// std::cout << RESET ;
// 		// T.assign(5, a3);
// 		// for (int i = 0; i < T.size(); i++)
// 		// 	std::cout << GREEN << T[i]._pos << std::endl;
// 		// std::cout << RESET ;
// 	}
// 	{
// 	// *inserting into a vector
// 		// std::vector<A> myvector (5,100);
// 		// myvector.reserve(10);
// 		// std::cout << "------\n\n"; 
// 		// ft::vector<A>::iterator it;
// 		// std::vector<int> myvector (3,100);
// 		// std::vector<int>::iterator it = myvector.begin();

// 		// for (it=myvector.begin(); it<myvector.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';
// 		// it = myvector.begin();
// 		// it = myvector.insert (it , 200);
// 		// std::cout << "it " << *it << std::endl;
// 		// std::cout << myvector.capacity() <<'\n';
// 		// std::cout << "myvector contains:";
// 		// for (it=myvector.begin(); it<myvector.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';
// 		// std::cout << "---------------------------\n\n"; 


// 		// myvector.insert (it - 3,4,42);
// 		// // std::cout << "it " << *it << std::endl;
// 		// for (it=myvector.begin(); it<myvector.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';
// 		// // it = myvector.begin();
// 		// // it = myvector.insert(it , 300 );
// 		// std::cout << myvector.capacity() <<'\n';
// 		// // std::cout << GREEN << *it << RESET << std::endl;
// 		// // std::cout << "---------------------------\n\n"; 
// 		// // std::cout << "myvector contains:";
// 		// // for (it=myvector.begin(); it<myvector.end(); it++)
// 		// // 	std::cout << ' ' << *it;
// 		// // std::cout << '\n';
// 		// // std::cout << myvector.capacity() <<'\n';
// 		// std::cout << "---------------------------\n\n"; 
// 		// // //! Danger !!!!
// 		// it = myvector.insert ( myvector.end() - 2, 200);
// 		// std::cout << GREEN << *it << RESET << std::endl;
// 		// std::cout << "it " << *it << std::endl;
// 		// for (it=myvector.begin(); it<myvector.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';

// 		// std::cout << "---------------------------\n\n"; 
// 		// myvector.insert (it,2,300);
// 		// std::cout << "it " << *it << std::endl;
// 		// for (it=myvector.begin(); it<myvector.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';

// 		// // "it" no longer valid, get a new one:
// 		// it = myvector.begin();

// 		// std::vector<int> anothervector (2,400);
// 		// myvector.insert (it+2,anothervector.begin(),anothervector.end());

// 		// int myarray [] = { 501,502,503 };
// 		// myvector.insert (myvector.begin(), myarray, myarray+3);

// 		// // ? Testing Range Insert :
// 		// int myints[] = { 1776, 88, 89, 90, 7, 4};
// 		// int myints1[] = { 1, 2, 3, 4};
// 		// std::vector<int> second;
// 		// std::vector<int> third;
// 		// third.assign (myints, myints + 6);   // assigning from array.
// 		// second.assign (myints1, myints1 + 4);   // assigning from array.
// 		// std::vector<int>::iterator it;
// 		// std::vector<int>::iterator pos = second.begin() + 2;
// 		// std::cout << *pos << std::endl;
// 		// std::vector<int>::iterator first = third.begin() + 1;
// 		// std::cout << *first << std::endl;
// 		// std::vector<int>::iterator last = third.end() - 3;
// 		// std::cout << *last << std::endl;

// 		// second.insert(pos, first, last);
// 		// std::cout << "---------------------------\n\n";
// 		// std::cout << "myvector contains:";
// 		// for (it = second.begin(); it < second.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';
// 		// std::cout << second.capacity() <<'\n';
// 		// std::cout << "---------------------------\n\n";
// 		// std::cout << "myvector contains:";
// 		// for (it = third.begin(); it < third.end(); it++)
// 		// 	std::cout << ' ' << *it;
// 		// std::cout << '\n';
// 		// std::cout << third.capacity() <<'\n';
// 	}
// 	//  }
// 	//  catch (std::exception e)
// 	//  {
// 	// 	 std::cout << e.what() << std::endl;
// 	//  }
	
// 	// it = myvector.begin();
// 	// it = myvector.insert ( it , 200 );
	
// 	// myvector.insert (it,2,300);
	
// 	// // "it" no longer valid, get a new one:
// 	// it = myvector.begin();
	
// 	// std::vector<int> anothervector (2,400);
// 	// myvector.insert (it+2,anothervector.begin(),anothervector.end());
	
// 	// int myarray [] = { 501,502,503 };
// 	// myvector.insert (myvector.begin(), myarray, myarray+3);
	
// 	// {
// 	// 	algorithm(3);       // T is int, include algorithm_signed()

// 	// 	unsigned x = 3;
// 	// 	algorithm(x);       // T is unsigned int, include algorithm_unsigned()

// 	// 	algorithm("hello"); // T is string, build error!
// 	// }
// // 	return 0;
// // }

// inserting into a vector
// #include <iostream>
// #include <vector>

// int main ()
// {
//   std::vector<int> myvector (3,100);
//   std::vector<int>::iterator it;

//   it = myvector.begin();
//   myvector.insert ( it + 1,50 , 42);
//   std::cout << CYAN << "_________myvector contains :__________"  << RESET << std::endl;
//   for (it=myvector.begin(); it<myvector.end(); it++)
//     std::cout << ' ' << *it;
//   std::cout << '\n';

// //   it = myvector.begin();
// //   myvector.insert (it,2,300);
// //   std::cout << CYAN << "_________myvector contains :__________"  << RESET << std::endl;
// //   for (it=myvector.begin(); it<myvector.end(); it++)
// //     std::cout << ' ' << *it;
// //   std::cout << '\n';
// //   // "it" no longer valid, get a new one:
// //   it = myvector.begin();

// //   ft::vector<int> anothervector (2,400);
// //   myvector.insert (it + 2, anothervector.begin(), anothervector.end());

// //   int myarray [] = { 501,502,503 };
// //   myvector.insert (myvector.begin(), myarray, myarray + 3);

// //   std::cout << CYAN << "_________myvector contains :__________"  << RESET << std::endl;
// //   for (it=myvector.begin(); it<myvector.end(); it++)
// //     std::cout << ' ' << *it;
// //   std::cout << '\n';

//   return 0;
// }
// int main (void)
// {
// 	// * Input iterator
// 	std::istream_iterator<int> start(std::cin);
// 	std::istream_iterator<int> end;
// 	// * My FK vector :
// 	std::vector<int> myvector (3,100);
// 	std::vector<int>::iterator it;
//     // const ft::vector<int> v(start, end);

// 	// for (size_t i = 0; i < v.size(); i++)
// 	// 	std::cout << v[i] << ' ';

// 	myvector.insert (myvector.begin() + 1, start, end);
// 	std::cout << std::endl;
// 	std::cout << "myvector contains:";
// 	for (size_t i = 0; i < myvector.size(); i++)
// 		std::cout << myvector[i] << ' ';
// }

// inserting into a vector
// #include <iostream>
// #include <vector>

// int main ()
// {
// 	std::vector<int> myvector (3,100);
// 	std::vector<int>::iterator it;

// 	it = myvector.begin();
// 	it = myvector.insert ( it , 200 );

// 	myvector.insert (it,0,300);

// 	// "it" no longer valid, get a new one:
// 	it = myvector.begin();

// 	std::vector<int> anothervector (2,400);
// 	myvector.insert (it+2,anothervector.begin() + 2, anothervector.begin() + 2);

// 	int myarray [] = { 501,502,503 };
// 	myvector.insert (myvector.begin(), myarray, myarray+3);

// 	std::cout << "myvector contains:";
// 	for (it=myvector.begin(); it<myvector.end(); it++)
// 		std::cout << ' ' << *it;
// 	std::cout << '\n';

// 	return 0;
// }

// swap (vector overload)

// swap (vector overload)


// int	main ()
// {
//   unsigned int i;
//   ft::vector<int> foo (3,100);   // three ints with a value of 100
//   ft::vector<int> bar (5,200);   // five ints with a value of 200

//   foo.swap(bar);

//   std::cout << "foo contains:";
//   for (ft::vector<int>::iterator it = foo.begin(); it!=foo.end(); ++it)
//     std::cout << ' ' << *it;
//   std::cout << '\n';
// 	std::cout << "Capacity : " << foo.capacity() << std::endl;
//   std::cout << "bar contains:";
//   for (ft::vector<int>::iterator it = bar.begin(); it!=bar.end(); ++it)
//     std::cout << ' ' << *it;
//   std::cout << '\n';
// 	std::cout << "Capacity : " << bar.capacity() << std::endl;
// 	// std::cout << "Hamida : " << bar[2] << std::endl;
//   return 0;
// }

// vector comparisons
// #include <iostream>
// #include <vector>

// int main ()
// {
// 	std::vector<int> foo (3,100);   // three ints with a value of 100
// 	std::vector<int> bar (8,200);

// 	// foo.push_back(1337);
// 	if (foo == bar) std::cout << "foo and bar are equal\n";
// 	if (foo != bar) std::cout << "foo and bar are not equal\n";
// 	if (foo <  bar) std::cout << "foo is less than bar\n";
// 	if (foo >  bar) std::cout << "foo is greater than bar\n";
// 	if (foo <= bar) std::cout << "foo is less than or equal to bar\n";
// 	if (foo >= bar) std::cout << "foo is greater than or equal to bar\n";

// 	return 0;
// }
int main()
{
    // std::cout << "\033[1;36m<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< vector tests >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m\n\n";
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " fill constructor "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*--------------- fill tow vectors with a 10 strings ------*/
    //     ft::vector<std::string> my_v(10, "fill constructor test");
    //     std::vector<std::string> v(10, "fill constructor test");
    //     /*---------------------------------------------------------*/
    //     /*--------------- declare tow strings to store the results ------*/
    //     std::string res, my_res;
    //     /*---------------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it) // fill res from std::vector
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = my_v.begin(); it != my_v.end(); ++it) // fill my_res from ft::vector
    //         my_res += *it;
    //     EQUAL(res == my_res);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " range constructor "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*--------------- fill std::vector with 10 strings and ft::vector with range of iterators ------*/
    //     std::vector<std::string> v(10, "range constructor test");
    //     ft::vector<std::string> my_v(10, "range constructor test");
    //     ft::vector<std::string> my_v1(my_v.begin(), my_v.end()); // this one is to check if the range works with ft::vector
    //     /*----------------------------------------------------------------------------------------------*/
    //     /*--------------- declare tow strings to store the results ------*/
    //     std::string res, my_res, my_res1;
    //     /*--------------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it) // fill res from std::vector
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = my_v.begin(); it != my_v.end(); ++it) // fill my_res from ft::vector
    //         my_res += *it;

    //     for (ft::vector<std::string>::iterator it = my_v1.begin(); it != my_v1.end(); ++it) // fill my_res1 from ft::vector
    //         my_res1 += *it;
    //     EQUAL(res == my_res && my_res == my_res1);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " copy constructor "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*---------------------------- declare a vector and fill with 'a', and create a copy of it ------------------*/
	// 	std::cout << YELLOW << "Hamida" << RESET << std::endl;
    //     ft::vector<char> v1(10, 'a');
	// 	std::cout << RED << "Hamida" << RESET << std::endl;
    //     ft::vector<char> copy_v(v1);
    //     /*-----------------------------------------------------------------------------------------------------------*/
    //     /*--------------- declare tow strings to store the results ------*/
    //     std::string res, res1;
    //     /*--------------------------------------------------------*/
    //     for (ft::vector<char>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;

    //     for (ft::vector<char>::iterator it = copy_v.begin(); it != copy_v.end(); ++it) // fill res from copy_v
    //         res1 += *it;
    //     EQUAL(res == res1);
    // }
    // /*------------------------------------------ = operator tests --------------------------------------------------------------------------------------------*/
    // /*------------------------------------------ test 1 : test with equale size vecotrs ----------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " = operator (lhs.size = rhs.size) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string1");
    //     std::vector<std::string> v2(10, "string2");
    //     v1 = v2;
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string1");
    //     ft::vector<std::string> ft_v2(10, "string2");
    //     ft_v1 = ft_v2;
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it) // fill ft_res from ft_v1
    //         ft_res += *it;

    //     EQUAL(res == ft_res);
    // }
    // /*-------------------------------------------------------------------------------------------------------------------------------------------------------*/
    // /*------------------------------------------ test 2 : test with diff size vecotrs ----------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " = operator (lhs.size < rhs.size) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string1");
    //     std::vector<std::string> v2(20, "string2");
    //     v1 = v2;
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string1");
    //     ft::vector<std::string> ft_v2(20, "string2");
    //     ft_v1 = ft_v2;
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it) // fill ft_res from ft_v1
    //         ft_res += *it;

    //     EQUAL(res == ft_res);
    // }
    // /*-------------------------------------------------------------------------------------------------------------------------------------------------------*/
    // /*------------------------------------------ test 3 : test with diff size vecotrs ----------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " = operator (lhs.size > rhs.size) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(20, "string1");
    //     std::vector<std::string> v2(10, "string2");
    //     v1 = v2;
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(20, "string1");
    //     ft::vector<std::string> ft_v2(10, "string2");
    //     ft_v1 = ft_v2;
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it) // fill ft_res from ft_v1
    //         ft_res += *it;

    //     EQUAL(res == ft_res);
    // }
    // /*-------------------------------------------------------------------------------------------------------------------------------------------------------*/
    // /*------------------------------------------ test 4 : test with one empty vector ----------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " = operator (lhs.size = 0) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1;
    //     std::vector<std::string> v2(10, "string2");
    //     v1 = v2;
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1;
    //     ft::vector<std::string> ft_v2(10, "string2");
    //     ft_v1 = ft_v2;
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it) // fill ft_res from ft_v1
    //         ft_res += *it;

    //     EQUAL(res == ft_res);
    // }
    // /*-------------------------------------------------------------------------------------------------------------------------------------------------------*/
    // /*------------------------------------------ test 5 : test with one empty vector ----------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " = operator (rhs.size = 0) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<std::string> v2;
    //     v1 = v2;
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<std::string> ft_v2;
    //     ft_v1 = ft_v2;
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it) // fill ft_res from ft_v1
    //         ft_res += *it;

    //     EQUAL(res == ft_res);
    // }
    // /*-------------------------------------------------------------------------------------------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " begin and end methods "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<std::string> const v2(10, "string2");
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<std::string> const ft_v2(10, "string2");
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res, c_res, c_ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::iterator it = v1.begin(); it != v1.end(); ++it) // fill res from v1
    //         res += *it;
    //     for (std::vector<std::string>::const_iterator rit = v2.begin(); rit != v2.end(); ++rit) // fill c_res from const v1
    //         c_res += *rit;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it) // fill ft_res from ft_v1
    //         ft_res += *it;
    //     for (ft::vector<std::string>::const_iterator rit = ft_v2.begin(); rit != ft_v2.end(); ++rit) // fill c_ft_res from const ft_v1
    //         c_ft_res += *rit;

    //     EQUAL(res == ft_res && c_res == c_ft_res);
    // }
    // /*-------------------------------------------------------------------------------------------------------------------------------------------------------*/
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " rbegin and rend methods "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<std::string> const v2(10, "string2");
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<std::string> const ft_v2(10, "string2");
    //     /*----------------------------------------------------*/
    //     /*------------------ strings to store the results ----*/
    //     std::string res, ft_res, c_res, c_ft_res;
    //     /*----------------------------------------------------*/
    //     for (std::vector<std::string>::reverse_iterator rit = v1.rbegin(); rit != v1.rend(); ++rit) // fill res from v1
    //         res += *rit;
    //     for (std::vector<std::string>::const_reverse_iterator rit = v2.rbegin(); rit != v2.rend(); ++rit) // fill c_res from const v1
    //         c_res += *rit;

    //     for (ft::vector<std::string>::reverse_iterator rit = ft_v1.rbegin(); rit != ft_v1.rend(); ++rit) // fill ft_res from ft_v1
    //         ft_res += *rit;
    //     for (ft::vector<std::string>::const_reverse_iterator rit = ft_v2.rbegin(); rit != ft_v2.rend(); ++rit) // fill c_ft_res from const ft_v1
    //         c_ft_res += *rit;

    //     EQUAL(res == ft_res && c_ft_res == c_res);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " size method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");          // fill constructor
    //     std::vector<std::string> v2;                         // empty constructor
    //     std::vector<std::string> v3(v1.begin(), v1.end());   // range constructor with normal iterators
    //     std::vector<std::string> v4(v3);                     // copy constructor
    //     std::vector<std::string> v5(v1.rbegin(), v1.rend()); // range constructor with reverse iterators
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<std::string> ft_v2;
    //     ft::vector<std::string> ft_v3(ft_v1.begin(), ft_v1.end());
    //     ft::vector<std::string> ft_v4(ft_v1);
    //     ft::vector<std::string> ft_v5(ft_v1.rbegin(), ft_v1.rend());
    //     /*----------------------------------------------------*/
    //     EQUAL(v1.size() == ft_v1.size() && v2.size() == ft_v2.size() && v3.size() == ft_v3.size() && v4.size() == ft_v4.size() && v5.size() == ft_v5.size());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " capacity method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");          // fill constructor
    //     std::vector<std::string> v2;                         // empty constructor
    //     std::vector<std::string> v3(v1.begin(), v1.end());   // range constructor with normal iterators
    //     std::vector<std::string> v4(v3);                     // copy constructor
    //     std::vector<std::string> v5(v1.rbegin(), v1.rend()); // range constructor with reverse iterators
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<std::string> ft_v2;
    //     ft::vector<std::string> ft_v3(ft_v1.begin(), ft_v1.end());
    //     ft::vector<std::string> ft_v4(ft_v1);
    //     ft::vector<std::string> ft_v5(ft_v1.rbegin(), ft_v1.rend());
    //     /*----------------------------------------------------*/
    //     EQUAL(v1.capacity() == ft_v1.capacity() && v2.capacity() == ft_v2.capacity() && v3.capacity() == ft_v3.capacity() && v4.capacity() == ft_v4.capacity() && v5.capacity() == ft_v5.capacity());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " max_size method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/

    //     std::vector<std::string> v1(10, "string");
    //     std::vector<int> v2;
    //     std::vector<double> v4;
    //     /*-----------------------------------------------------*/
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<int> ft_v2;
    //     ft::vector<double> ft_v4;
    //     /*----------------------------------------------------*/
    //     EQUAL(v1.max_size() == ft_v1.max_size() && v2.max_size() == ft_v2.max_size() && v4.max_size() == ft_v4.max_size());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " resize method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, s3, s4, ft_s1, ft_s2, ft_s3, ft_s4;
    //     std::string sit1, sit2, sit3, ft_sit1, ft_sit2, ft_sit3; // strings to store the result by iterators
    //     /*
    //      * Var to store the size and the capacity
    //      */
    //     size_t z1, z2, z3, z4, ft_z1, ft_z2, ft_z3, ft_z4;
    //     size_t c1, c2, c3, c4, ft_c1, ft_c2, ft_c3, ft_c4;
    //     /*
    //      * iterators to check the iterator validity
    //      *  it : iterator, eit : iterator to the end
    //      */
    //     std::vector<std::string>::iterator valid_it, valid_eit;
    //     ft::vector<std::string>::iterator ft_valid_it, ft_valid_eit;
    //     /*
    //      * test with n greater than vector capacity
    //      */
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     v1.resize(1e6, "hello");
    //     /*------------------ ft::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft_v1.resize(1e6, "hello");

    //     z1 = v1.size();
    //     ft_z1 = ft_v1.size();
    //     c1 = v1.capacity();
    //     ft_c1 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s1 += v1[i];

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it)
    //         ft_s1 += *it;
    //     /*----------------------------------------------------*/
    //     /*
    //      *	test with n lesser than capacity and greater than size
    //      */
    //     /*------------------ std::vectors ---------------------*/
    //     v1.resize(20);
    //     valid_it = v1.begin();
    //     valid_eit = v1.end();
    //     v1.resize(1e5);
    //     /*------------------ ft::vectors ---------------------*/
    //     ft_v1.resize(20);
    //     ft_valid_it = ft_v1.begin();
    //     ft_valid_eit = ft_v1.end();
    //     ft_v1.resize(1e5);

    //     z2 = v1.size();
    //     ft_z2 = ft_v1.size();
    //     c2 = v1.capacity();
    //     ft_c2 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s2 += v1[i];

    //     for (; valid_it != valid_eit; ++valid_it)
    //         sit1 += *valid_it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it)
    //         ft_s2 += *it;

    //     for (; ft_valid_it != ft_valid_eit; ++ft_valid_it)
    //         ft_sit1 += *ft_valid_it;
    //     /*----------------------------------------------------*/
    //     /*
    //      * test with n lesser than capacity and lesser an size
    //      */
    //     /*------------------ std::vectors ---------------------*/
    //     valid_it = v1.begin();
    //     v1.resize(50);
    //     /*------------------ ft::vectors ---------------------*/
    //     ft_valid_it = ft_v1.begin();
    //     ft_v1.resize(50);

    //     z3 = v1.size();
    //     ft_z3 = ft_v1.size();
    //     c3 = v1.capacity();
    //     ft_c3 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s3 += v1[i];

    //     for (; valid_it != v1.end(); ++valid_it)
    //         sit2 += *valid_it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it)
    //         ft_s3 += *it;

    //     for (; ft_valid_it != ft_v1.end(); ++ft_valid_it)
    //         ft_sit2 += *ft_valid_it;
    //     /*----------------------------------------------------*/
    //     /*
    //      * test with n = 0
    //      */
    //     /*------------------ std::vectors ---------------------*/
    //     valid_it = v1.begin();
    //     v1.resize(0, "string4");
    //     /*------------------ ft::vectors ---------------------*/
    //     ft_valid_it = ft_v1.begin();
    //     ft_v1.resize(0, "string4");

    //     z4 = v1.size();
    //     ft_z4 = ft_v1.size();
    //     c4 = v1.capacity();
    //     ft_c4 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s4 += v1[i];

    //     for (; valid_it != v1.end(); ++valid_it)
    //         sit3 += *valid_it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it)
    //         ft_s4 += *it;

    //     for (; ft_valid_it != ft_v1.end(); ++ft_valid_it)
    //         ft_sit3 += *ft_valid_it;
    //     /*----------------------------------------------------*/
    //     EQUAL((s1 == ft_s1 && z1 == ft_z1 && c1 == ft_c1 && sit1 == ft_sit1) && (s2 == ft_s2 && z2 == ft_z2 && c2 == ft_c2) && (s3 == ft_s3 && z3 == ft_z3 && c3 == ft_c3 && sit2 == ft_sit2) && (s4 == ft_s4 && z4 == ft_z4 && c4 == ft_c4 && sit3 == ft_sit3));
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " empty method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<int> v2;
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<int> ft_v2;

    //     EQUAL(v1.empty() == ft_v1.empty() && v2.empty() == ft_v2.empty());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " reserve method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, s3, ft_s1, ft_s2, ft_s3;
    //     std::string sit1, ft_sit1; // strings to store the result by iterators
    //     /*
    //      * Var to store the size and the capacity
    //      */
    //     size_t z1, z2, z3, ft_z1, ft_z2, ft_z3;
    //     size_t c1, c2, c3, ft_c1, ft_c2, ft_c3;
    //     /*
    //      * iterators to check the iterator validity
    //      *  it : iterator, eit : iterator to the end
    //      */
    //     std::vector<std::string>::iterator valid_it, valid_eit;
    //     ft::vector<std::string>::iterator ft_valid_it, ft_valid_eit;
    //     // bool to check if the function throw or not
    //     bool exec_throwed = false;
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<char> v2;
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<char> ft_v2;
    //     try
    //     {
    //         ft_v1.reserve(ft_v1.max_size() + 1);
    //     }
    //     catch (std::length_error const &e)
    //     {
    //         (void)e;
    //         exec_throwed = true;
    //     }
    //     v1.reserve(100);
    //     ft_v1.reserve(100);

    //     z1 = v1.size();
    //     ft_z1 = ft_v1.size();
    //     c1 = v1.capacity();
    //     ft_c1 = ft_v1.capacity();

    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s1 += v1[i];

    //     ft_valid_it = ft_v1.begin();
    //     for (; ft_valid_it != ft_v1.end(); ++ft_valid_it)
    //         ft_s1 += *ft_valid_it;

    //     valid_it = v1.begin();
    //     valid_eit = v1.end();
    //     ft_valid_it = ft_v1.begin();
    //     ft_valid_eit = ft_v1.end();
    //     v1.reserve(50);
    //     ft_v1.reserve(50);

    //     z2 = v1.size();
    //     ft_z2 = ft_v1.size();
    //     c2 = v1.capacity();
    //     ft_c2 = ft_v1.capacity();

    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s2 += v1[i];

    //     for (; valid_it != valid_eit; ++valid_it)
    //         sit1 += *valid_it;

    //     for (ft::vector<std::string>::iterator it = ft_v1.begin(); it != ft_v1.end(); ++it)
    //         ft_s2 += *it;

    //     for (; ft_valid_it != ft_valid_eit; ++ft_valid_it)
    //         ft_sit1 += *ft_valid_it;

    //     v2.reserve(200);
    //     ft_v2.reserve(200);
    //     z3 = v2.size();
    //     ft_z3 = ft_v2.size();
    //     c3 = v2.capacity();
    //     ft_c3 = ft_v2.capacity();

    //     for (size_t i = 0; i < v2.size(); ++i)
    //         s3 += v2[i];

    //     for (ft::vector<char>::iterator it = ft_v2.begin(); it != ft_v2.end(); ++it)
    //         ft_s3 += *it;

    //     EQUAL((s1 == ft_s1 && z1 == ft_z1 && c1 == ft_c1 && sit1 == ft_sit1) && (s2 == ft_s2 && z2 == ft_z2 && c2 == ft_c2) && (s3 == ft_s3 && z3 == ft_z3 && c3 == ft_c3) && exec_throwed);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator[] method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<char> const v2(10, '9');
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<char> const ft_v2(10, '9');
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, ft_s1, ft_s2;

    //     for (size_t i = 0; i < v1.size(); ++i)
    //     {
    //         if (i == v1.size() - 1)
    //             v1[i] = "other";
    //         s1 += v1[i];
    //     }

    //     for (size_t i = 0; i < ft_v1.size(); ++i)
    //     {
    //         if (i == ft_v1.size() - 1)
    //             ft_v1[i] = "other";
    //         ft_s1 += ft_v1[i];
    //     }

    //     for (size_t i = 0; i < v2.size(); ++i)
    //         s2 += v2[i];

    //     for (size_t i = 0; i < ft_v2.size(); ++i)
    //         ft_s2 += ft_v2[i];

    //     EQUAL(s1 == ft_s1 && s2 == ft_s2);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " at method "
    //           << "] --------------------]\t\t\033[0m";
    // {
        
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<char> const v2(10, '9');
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<char> const ft_v2(10, '9');
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, ft_s1, ft_s2;
    //     // bool to check if an exception is throwed
    //     bool exce_throwed = false;

    //     try
    //     {
    //         ft_v1.at(20);
    //     }
    //     catch (std::out_of_range const &e)
    //     {
    //         (void)e;
    //         exce_throwed = true;
    //     }
    //     for (size_t i = 0; i < v1.size(); ++i)
    //     {
    //         if (i == v1.size() - 1)
    //             v1.at(i) = "other";
    //         s1 += v1.at(i);
    //     }

    //     for (size_t i = 0; i < ft_v1.size(); ++i)
    //     {
    //         if (i == ft_v1.size() - 1)
    //             ft_v1.at(i) = "other";
    //         ft_s1 += ft_v1.at(i);
    //     }

    //     for (size_t i = 0; i < v2.size(); ++i)
    //         s2 += v2.at(i);
    //     for (size_t i = 0; i < ft_v2.size(); ++i)
    //         ft_s2 += ft_v2.at(i);

    //     EQUAL(s1 == ft_s1 && s2 == ft_s2 && exce_throwed);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " front method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<int> const v2(10, 9);
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<int> const ft_v2(10, 9);

    //     v1.front() = "LEET";
    //     ft_v1.front() = "LEET";
    //     EQUAL(v1.front() == ft_v1.front() && v2.front() == ft_v2.front());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " back method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<int> const v2(10, 9);
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<int> const ft_v2(10, 9);

    //     v1.back() = "LEET";
    //     ft_v1.back() = "LEET";
    //     EQUAL(v1.back() == ft_v1.back() && v2.back() == ft_v2.back());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " assign(fill) method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(10, "string2");
    //     std::vector<char> v2;
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(10, "string2");
    //     ft::vector<char> ft_v2;
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, s3, ft_s1, ft_s2, ft_s3;
    //     /*
    //      * Var to store the size and the capacity
    //      */
    //     size_t z1, z2, z3, ft_z1, ft_z2, ft_z3;
    //     size_t c1, c2, c3, ft_c1, ft_c2, ft_c3;
    //     // test for n greater than the vector capactiy
    //     v1.assign(20, "assign");
    //     ft_v1.assign(20, "assign");

    //     z1 = v1.size();
    //     ft_z1 = ft_v1.size();
    //     c1 = v1.capacity();
    //     ft_c1 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s1 += v1.at(i);

    //     for (size_t i = 0; i < ft_v1.size(); ++i)
    //         ft_s1 += ft_v1.at(i);
    //     // test for n lesser than the vector capactiy
    //     v1.assign(10, "less");
    //     ft_v1.assign(10, "less");

    //     z2 = v1.size();
    //     ft_z2 = ft_v1.size();
    //     c2 = v1.capacity();
    //     ft_c2 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s3 += v1.at(i);

    //     for (size_t i = 0; i < ft_v1.size(); ++i)
    //         ft_s3 += ft_v1.at(i);
    //     // test for empty vectors
    //     v2.assign(20, 'h');
    //     ft_v2.assign(20, 'h');

    //     z3 = v2.size();
    //     ft_z3 = ft_v2.size();
    //     c3 = v2.capacity();
    //     ft_c3 = ft_v2.capacity();
    //     for (size_t i = 0; i < v2.size(); ++i)
    //         s2 += v2.at(i);

    //     for (size_t i = 0; i < ft_v2.size(); ++i)
    //         ft_s2 += ft_v2.at(i);

    //     EQUAL((s1 == ft_s1 && z1 == ft_z1 && c1 == ft_c1) && (s2 == ft_s2 && z2 == ft_z2 && c2 == ft_c2) && (s3 == ft_s3 && z3 == ft_z3 && c3 == ft_c3));
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " assign(range) method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v1(20, "less");
    //     std::vector<std::string> v2;
    //     std::vector<std::string> v3(10, "string2");
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v1(20, "less");
    //     ft::vector<std::string> ft_v2;
    //     ft::vector<std::string> ft_v3(10, "string2");
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, s3, ft_s1, ft_s2, ft_s3;
    //     /*
    //      * Var to store the size and the capacity
    //      */
    //     size_t z1, z2, z3, ft_z1, ft_z2, ft_z3;
    //     size_t c1, c2, c3, ft_c1, ft_c2, ft_c3;
    //     // test for n greater than the vector capactiy
    //     v3.assign(v1.begin(), v1.end());
    //     ft_v3.assign(v1.begin(), v1.end());

    //     z1 = v3.size();
    //     c1 = v3.capacity();
    //     ft_z1 = ft_v3.size();
    //     ft_c1 = ft_v3.capacity();
    //     for (size_t i = 0; i < v3.size(); ++i)
    //         s1 += v3.at(i);

    //     for (size_t i = 0; i < ft_v3.size(); ++i)
    //         ft_s1 += ft_v3.at(i);
    //     // test for n lesser than the vector capactiy
    //     v1.assign(v3.begin(), v3.end());
    //     ft_v1.assign(ft_v3.begin(), ft_v3.end());

    //     z2 = v1.size();
    //     c2 = v1.capacity();
    //     ft_z2 = ft_v1.size();
    //     ft_c2 = ft_v1.capacity();
    //     for (size_t i = 0; i < v1.size(); ++i)
    //         s3 += v1.at(i);

    //     for (size_t i = 0; i < ft_v1.size(); ++i)
    //         ft_s3 += ft_v1.at(i);
    //     // test for empty vectors
    //     v2.assign(v1.begin(), v1.end());
    //     ft_v2.assign(ft_v1.begin(), ft_v1.end());

    //     z3 = v2.size();
    //     c3 = v2.capacity();
    //     ft_z3 = ft_v2.size();
    //     ft_c3 = ft_v2.capacity();
    //     for (size_t i = 0; i < v2.size(); ++i)
    //         s2 += v2.at(i);

    //     for (size_t i = 0; i < ft_v2.size(); ++i)
    //         ft_s2 += ft_v2.at(i);

    //     EQUAL((s1 == ft_s1 && z1 == ft_z1 && c1 == ft_c1) && (s2 == ft_s2 && z2 == ft_z2 && c2 == ft_c2) && (s3 == ft_s3 && z3 == ft_z3 && c3 == ft_c3));
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " push_back method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v;
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v;
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, s2, s3, ft_s1, ft_s2, ft_s3;
    //     /*
    //      * Var to store the size and the capacity
    //      */
    //     size_t z1, z2, z3, ft_z1, ft_z2, ft_z3;
    //     size_t c1, c2, c3, ft_c1, ft_c2, ft_c3;
    //     ft::vector<std::string>::iterator ft_it;
    //     // test for an empty vector
    //     v.push_back("hello");
    //     ft_v.push_back("hello");
    //     ft_it = ft_v.begin();
    //     ft_it->length();

    //     z1 = v.size();
    //     c1 = v.capacity();
    //     ft_z1 = ft_v.size();
    //     ft_c1 = ft_v.capacity();
    //     for (size_t i = 0; i < v.size(); ++i)
    //         s1 += v.at(i);

    //     for (size_t i = 0; i < ft_v.size(); ++i)
    //         ft_s1 += ft_v.at(i);
    //     /*---------------------------------------------*/
    //     // test for a vector with capacity >= size + the new element
    //     v.reserve(30);
    //     ft_v.reserve(30);
    //     v.push_back("string");
    //     ft_v.push_back("string");
    //     v.push_back("string");
    //     ft_v.push_back("string");

    //     z2 = v.size();
    //     c2 = v.capacity();
    //     ft_z2 = ft_v.size();
    //     ft_c2 = ft_v.capacity();
    //     for (size_t i = 0; i < v.size(); ++i)
    //         s2 += v.at(i);

    //     for (size_t i = 0; i < ft_v.size(); ++i)
    //         ft_s2 += ft_v.at(i);
    //     /*---------------------------------------------------------*/
    //     // test for a vector with capactiy < size + the new element
    //     for (size_t i = 0; i < 100; ++i)
    //         v.push_back("string");

    //     for (size_t i = 0; i < 100; ++i)
    //         ft_v.push_back("string");

    //     z3 = v.size();
    //     c3 = v.capacity();
    //     ft_z3 = ft_v.size();
    //     ft_c3 = ft_v.capacity();
    //     for (size_t i = 0; i < v.size(); ++i)
    //         s3 += v.at(i);

    //     for (size_t i = 0; i < ft_v.size(); ++i)
    //         ft_s3 += ft_v.at(i);

    //     EQUAL((s1 == ft_s1 && z1 == ft_z1 && c1 == ft_c1) && (s2 == ft_s2 && z2 == ft_z2 && c2 == ft_c2) && (s3 == ft_s3 && z3 == ft_z3 && c3 == ft_c3));
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " pop_back method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*------------------ std::vectors ---------------------*/
    //     std::vector<std::string> v(20, "string");
    //     /*------------------ std::vectors ---------------------*/
    //     ft::vector<std::string> ft_v(20, "string");
    //     /*
    //      * Strings to store the results
    //      */
    //     std::string s1, ft_s1;
    //     /*
    //      * Var to store the size and the capacity
    //      */
    //     size_t z1, ft_z1;
    //     size_t c1, ft_c1;
    //     v.pop_back();
    //     ft_v.pop_back();
    //     z1 = v.size();
    //     ft_z1 = ft_v.size();
    //     c1 = v.capacity();
    //     ft_c1 = ft_v.capacity();
    //     for (size_t i = 0; i < v.size(); ++i)
    //         s1 += v[i];
    //     for (size_t i = 0; i < ft_v.size(); ++i)
    //         ft_s1 += ft_v[i];
    //     EQUAL(z1 == ft_z1 && c1 == ft_c1 && s1 == ft_s1);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " insert method (single element) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     ft::vector<std::string>::iterator ft_it;
    //     std::vector<std::string>::iterator it;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     /*------------------------------- test 1: empty vector ----------------------------------------*/
    //     // insert at the begin
    //     {
    //         std::vector<std::string> v;
    //         ft::vector<std::string> ft_v;
    //         it = v.insert(v.begin(), "hello");
    //         ft_it = ft_v.insert(ft_v.begin(), "hello");
    //         ft_it->length();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c) && (*ft_it == *it));
    //     }
    //     // insert at the end
    //     {
    //         std::vector<std::string> v;
    //         ft::vector<std::string> ft_v;

    //         it = v.insert(v.end(), "hello");
    //         ft_it = ft_v.insert(ft_v.end(), "hello");
    //         ft_it->length();

    //         str.clear();
    //         ft_str.clear();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (*it == *ft_it));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     /*------------------------------- test 2: the vector capacity >= size + the new element ----------------------------------------*/
    //     {
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");
    //         ft::vector<std::string>::iterator valid_it;

    //         v.reserve(30);
    //         ft_v.reserve(30);
    //         valid_it = ft_v.begin();
    //         it = v.insert(v.begin() + 10, "hello");
    //         ft_it = ft_v.insert(ft_v.begin() + 10, "hello");
    //         ft_it->length();

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (*it == *ft_it) && (&(*valid_it) == &(*ft_v.begin())));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     /*------------------------------- test 3: the vector capacity < size + the new element ----------------------------------------*/
    //     {
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");

    //         it = v.insert(v.begin() + 10, "hello");
    //         ft_it = ft_v.insert(ft_v.begin() + 10, "hello");
    //         ft_it->length();

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (*it == *ft_it));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " insert method (fill) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     /*------------------------------- test 1: empty vector ----------------------------------------*/
    //     // insert at the begin
    //     {
    //         std::vector<std::string> v;
    //         ft::vector<std::string> ft_v;
    //         v.insert(v.begin(), 100, "hello");
    //         ft_v.insert(ft_v.begin(), 100, "hello");
    //         ft_v.begin()->length();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     // insert at the end
    //     {
    //         std::vector<std::string> v;
    //         ft::vector<std::string> ft_v;

    //         v.insert(v.end(), "hello");
    //         ft_v.insert(ft_v.end(), "hello");
    //         ft_v.begin()->length();

    //         str.clear();
    //         ft_str.clear();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     // /*---------------------------------------------------------------------------------------------------*/
    //     // /*------------------------------- test 2: the vector capacity >= size + n ----------------------------------------*/
    //     {
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");
    //         ft::vector<std::string>::iterator valid_it;

    //         v.reserve(100);
    //         ft_v.reserve(100);
    //         valid_it = ft_v.begin();
    //         v.insert(v.begin() + 15, 70, "hello");
    //         ft_v.insert(ft_v.begin() + 15, 70, "hello");

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (&(*valid_it) == &(*ft_v.begin())));
    //     }
    //     // /*---------------------------------------------------------------------------------------------------*/
    //     // /*------------------------------- test 3: the vector capacity < size + n && n > size ----------------------------------------*/
    //     {
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");

    //         v.insert(v.begin() + 10, 100, "hello");
    //         ft_v.insert(ft_v.begin() + 10, 100, "hello");

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     // /*---------------------------------------------------------------------------------------------------*/
    //     // /*------------------------------- test 4: the vector capacity < size + n && n <= size ----------------------------------------*/
    //     {
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");

    //         v.insert(v.begin() + 10, 15, "hello");
    //         ft_v.insert(ft_v.begin() + 10, 15, "hello");

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     // /*---------------------------------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " insert method (range) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     /*------------------------------- test 1: empty vector ----------------------------------------*/
    //     // insert at the begin
    //     {
    //         std::vector<std::string> v1(300, "string");
    //         std::vector<std::string> v;
    //         ft::vector<std::string> ft_v;
    //         v.insert(v.begin(), v1.begin(), v1.end());
    //         ft_v.insert(ft_v.begin(), v1.begin(), v1.end());
    //         ft_v.begin()->length();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     // insert at the end
    //     {
    //         std::vector<std::string> v;
    //         ft::vector<std::string> v1(300, "string");
    //         ft::vector<std::string> ft_v;

    //         v.insert(v.end(), v1.begin(), v1.end());
    //         ft_v.insert(ft_v.end(), v1.begin(), v1.end());
    //         ft_v.begin()->length();

    //         str.clear();
    //         ft_str.clear();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     /*------------------------------- test 2: the vector capacity >= size + n ----------------------------------------*/
    //     {
    //         std::vector<std::string> v1(70, "hello");
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");
    //         ft::vector<std::string>::iterator valid_it;

    //         v.reserve(100);
    //         ft_v.reserve(100);
    //         valid_it = ft_v.begin();
    //         v.insert(v.begin() + 15, v1.begin(), v1.end());
    //         ft_v.insert(ft_v.begin() + 15, v1.begin(), v1.end());

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c) && (&(*valid_it) == &(*ft_v.begin())));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     /*------------------------------- test 3: the vector capacity < size + n && n > size ----------------------------------------*/
    //     {
    //         ft::vector<std::string> v1(100, "hello");
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");

    //         v.insert(v.begin() + 10, v1.begin(), v1.end());
    //         ft_v.insert(ft_v.begin() + 10, v1.begin(), v1.end());

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     /*------------------------------- test 4: the vector capacity < size + n && n <= size ----------------------------------------*/
    //     {
    //         std::vector<std::string> v1(15, "hello");
    //         std::vector<std::string> v(20, "string");
    //         ft::vector<std::string> ft_v(20, "string");

    //         v.insert(v.begin() + 10, v1.begin(), v1.end());
    //         ft_v.insert(ft_v.begin() + 10, v1.begin(), v1.end());

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     /*---------------------------------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " erase method (single element) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     std::vector<std::string> v(200, "hello");
    //     ft::vector<std::string> ft_v(200, "hello");
    //     ft::vector<std::string>::iterator valid_it;
    //     std::vector<std::string>::iterator it;
    //     ft::vector<std::string>::iterator ft_it;
    //     valid_it = ft_v.begin() + 99;
    //     it = v.erase(v.begin() + 100);
    //     ft_it = ft_v.erase(ft_v.begin() + 100);
    //     ft_it->length();

    //     s = v.size();
    //     ft_s = ft_v.size();
    //     c = v.capacity();
    //     ft_c = ft_v.capacity();
    //     for (size_t i = 0; i < v.size(); ++i)
    //         str += v[i];
    //     for (size_t i = 0; i < ft_v.size(); ++i)
    //         ft_str += ft_v[i];
    //     cond = ((str == ft_str) && (s == ft_s) && (c == ft_c) && (&(*valid_it) == &(*(ft_v.begin() + 99))));
    //     cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
    //     EQUAL(cond);
    // }

    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " erase method (range) "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     std::vector<std::string>::iterator it;
    //     ft::vector<std::string>::iterator ft_it;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;
    //     /*------------------ test 1: erase from the begin to end -------------------*/
    //     {
    //         std::vector<std::string> v(100, "hello");
    //         ft::vector<std::string> ft_v(100, "hello");

    //         it = v.erase(v.begin(), v.end());
    //         ft_it = ft_v.erase(ft_v.begin(), ft_v.end());

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.size();
    //         ft_c = ft_v.size();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
    //     }

    //     /*--------------------------------------------------------------------------*/
    //     /*------------------ test 2: erase from the begin to begin + 70 -------------------*/
    //     {
    //         std::vector<std::string> v(100, "hello");
    //         ft::vector<std::string> ft_v(100, "hello");

    //         it = v.erase(v.begin(), v.begin() + 70);
    //         ft_it = ft_v.erase(ft_v.begin(), ft_v.begin() + 70);
    //         ft_it->length();

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.size();
    //         ft_c = ft_v.size();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
    //     }
    //     /*--------------------------------------------------------------------------*/
    //     /*------------------ test 3: erase from the begin + 60 to end -------------------*/

    //     {
    //         std::vector<std::string> v(100, "hello");
    //         ft::vector<std::string> ft_v(100, "hello");

    //         it = v.erase(v.begin() + 60, v.end());
    //         ft_it = ft_v.erase(ft_v.begin() + 60, ft_v.end());

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.size();
    //         ft_c = ft_v.size();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
    //     }

    //     /*--------------------------------------------------------------------------*/
    //     /*------------------ test 4: erase from the begin + 20 to end - 30 -------------------*/
    //     {
    //         std::vector<std::string> v(100, "hello");
    //         ft::vector<std::string> ft_v(100, "hello");

    //         it = v.erase(v.begin() + 20, v.end() - 30);
    //         ft_it = ft_v.erase(ft_v.begin() + 20, ft_v.end() - 30);
    //         ft_it->length();

    //         str.clear();
    //         ft_str.clear();
    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.size();
    //         ft_c = ft_v.size();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];
    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
    //     }
    //     /*--------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " swap method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     ft::vector<std::string>::iterator b1, b2;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     /*---------------------------------- test 1: equal size vectors ----------------------*/
    //     {
    //         std::vector<std::string> v(200, "hello");
    //         std::vector<std::string> v1(200, "string");
    //         ft::vector<std::string> ft_v(200, "hello");
    //         ft::vector<std::string> ft_v1(200, "string");

    //         b1 = ft_v.begin();
    //         b2 = ft_v1.begin();

    //         v.swap(v1);
    //         ft_v.swap(ft_v1);

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && ((&*b2) == (&(*ft_v.begin()))));
    //         cond = (cond && ((&*b1) == (&(*ft_v1.begin()))));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     /*---------------------------------- test 2: lhs > rhs ----------------------*/
    //     {
    //         std::vector<std::string> v(200, "hello");
    //         std::vector<std::string> v1(50, "string");
    //         ft::vector<std::string> ft_v(200, "hello");
    //         ft::vector<std::string> ft_v1(50, "string");

    //         b1 = ft_v.begin();
    //         b2 = ft_v1.begin();

    //         v.swap(v1);
    //         ft_v.swap(ft_v1);

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && ((&*b2) == (&(*ft_v.begin()))));
    //         cond = (cond && ((&*b1) == (&(*ft_v1.begin()))));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     /*---------------------------------- test 2: lhs < rhs ----------------------*/
    //     {
    //         std::vector<std::string> v(50, "hello");
    //         std::vector<std::string> v1(200, "string");
    //         ft::vector<std::string> ft_v(50, "hello");
    //         ft::vector<std::string> ft_v1(200, "string");

    //         b1 = ft_v.begin();
    //         b2 = ft_v1.begin();

    //         v.swap(v1);
    //         ft_v.swap(ft_v1);

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && ((&*b2) == (&(*ft_v.begin()))));
    //         cond = (cond && ((&*b1) == (&(*ft_v1.begin()))));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " clear method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     /*---------------------------------- test 1: equal size vectors ----------------------*/
    //     {
    //         std::vector<std::string> v(200, "hello");
    //         ft::vector<std::string> ft_v(200, "hello");

    //         v.clear();
    //         ft_v.clear();

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " get_allocator method "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     std::vector<std::string> v(200, "hello");
    //     ft::vector<std::string> ft_v(200, "hello");

    //     EQUAL(v.get_allocator().max_size() == ft_v.get_allocator().max_size());
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator== "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     bool cond;
    //     /*------------------------------------------ test 1: lhs.size == rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = ((v == v1) == (ft_v == ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v == v1) == (ft_v == ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v == v1) == (ft_v == ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 2: lhs.size < rhs.size ------------------*/
    //     {
    //         std::vector<int> v(50, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(50, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = (cond && (v == v1) == (ft_v == ft_v1));
    //         v[40] = 4;
    //         ft_v[40] = 4;
    //         cond = (cond && ((v == v1) == (ft_v == ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v == v1) == (ft_v == ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 3: lhs.size > rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(50, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(50, 5);

    //         cond = (cond && (v == v1) == (ft_v == ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v == v1) == (ft_v == ft_v1)));
    //         v1[40] = 3;
    //         ft_v1[40] = 3;
    //         cond = (cond && ((v == v1) == (ft_v == ft_v1)));
    //     }
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator!= "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     bool cond;
    //     /*------------------------------------------ test 1: lhs.size == rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = ((v != v1) == (ft_v != ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v != v1) == (ft_v != ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v != v1) == (ft_v != ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 2: lhs.size < rhs.size ------------------*/
    //     {
    //         std::vector<int> v(50, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(50, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = (cond && (v != v1) == (ft_v != ft_v1));
    //         v[40] = 4;
    //         ft_v[40] = 4;
    //         cond = (cond && ((v != v1) == (ft_v != ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v != v1) == (ft_v != ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 3: lhs.size > rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(50, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(50, 5);

    //         cond = (cond && (v != v1) == (ft_v != ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v != v1) == (ft_v != ft_v1)));
    //         v1[40] = 3;
    //         ft_v1[40] = 3;
    //         cond = (cond && ((v != v1) == (ft_v != ft_v1)));
    //     }
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator< "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     bool cond;
    //     /*------------------------------------------ test 1: lhs.size == rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = ((v < v1) == (ft_v < ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v < v1) == (ft_v < ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v < v1) == (ft_v < ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 2: lhs.size < rhs.size ------------------*/
    //     {
    //         std::vector<int> v(50, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(50, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = (cond && (v < v1) == (ft_v < ft_v1));
    //         v[40] = 4;
    //         ft_v[40] = 4;
    //         cond = (cond && ((v < v1) == (ft_v < ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v < v1) == (ft_v < ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 3: lhs.size > rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(50, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(50, 5);

    //         cond = (cond && (v < v1) == (ft_v < ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v < v1) == (ft_v < ft_v1)));
    //         v1[40] = 3;
    //         ft_v1[40] = 3;
    //         cond = (cond && ((v < v1) == (ft_v < ft_v1)));
    //     }
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator<= "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     bool cond;
    //     /*------------------------------------------ test 1: lhs.size == rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = ((v <= v1) == (ft_v <= ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v <= v1) == (ft_v <= ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v <= v1) == (ft_v <= ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 2: lhs.size < rhs.size ------------------*/
    //     {
    //         std::vector<int> v(50, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(50, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = (cond && (v <= v1) == (ft_v <= ft_v1));
    //         v[40] = 4;
    //         ft_v[40] = 4;
    //         cond = (cond && ((v <= v1) == (ft_v <= ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v <= v1) == (ft_v <= ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 3: lhs.size > rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(50, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(50, 5);

    //         cond = (cond && (v <= v1) == (ft_v <= ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v <= v1) == (ft_v <= ft_v1)));
    //         v1[40] = 3;
    //         ft_v1[40] = 3;
    //         cond = (cond && ((v <= v1) == (ft_v <= ft_v1)));
    //     }
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator> "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     bool cond;
    //     /*------------------------------------------ test 1: lhs.size == rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = ((v > v1) == (ft_v > ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v > v1) == (ft_v > ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v > v1) == (ft_v > ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 2: lhs.size < rhs.size ------------------*/
    //     {
    //         std::vector<int> v(50, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(50, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = (cond && (v > v1) == (ft_v > ft_v1));
    //         v[40] = 4;
    //         ft_v[40] = 4;
    //         cond = (cond && ((v > v1) == (ft_v > ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v > v1) == (ft_v > ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 3: lhs.size > rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(50, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(50, 5);

    //         cond = (cond && (v > v1) == (ft_v > ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v > v1) == (ft_v > ft_v1)));
    //         v1[40] = 3;
    //         ft_v1[40] = 3;
    //         cond = (cond && ((v > v1) == (ft_v > ft_v1)));
    //     }
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " operator>= "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     bool cond;
    //     /*------------------------------------------ test 1: lhs.size == rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = ((v >= v1) == (ft_v >= ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v >= v1) == (ft_v >= ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v >= v1) == (ft_v >= ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 2: lhs.size < rhs.size ------------------*/
    //     {
    //         std::vector<int> v(50, 5);
    //         std::vector<int> v1(100, 5);
    //         ft::vector<int> ft_v(50, 5);
    //         ft::vector<int> ft_v1(100, 5);

    //         cond = (cond && (v >= v1) == (ft_v >= ft_v1));
    //         v[40] = 4;
    //         ft_v[40] = 4;
    //         cond = (cond && ((v >= v1) == (ft_v >= ft_v1)));
    //         v1[80] = 3;
    //         ft_v1[80] = 3;
    //         cond = (cond && ((v >= v1) == (ft_v >= ft_v1)));
    //     }
    //     /*------------------------------------------------------------------------------------------*/
    //     /*------------------------------------------ test 3: lhs.size > rhs.size ------------------*/
    //     {
    //         std::vector<int> v(100, 5);
    //         std::vector<int> v1(50, 5);
    //         ft::vector<int> ft_v(100, 5);
    //         ft::vector<int> ft_v1(50, 5);

    //         cond = (cond && (v >= v1) == (ft_v >= ft_v1));
    //         v[80] = 4;
    //         ft_v[80] = 4;
    //         cond = (cond && ((v >= v1) == (ft_v >= ft_v1)));
    //         v1[40] = 3;
    //         ft_v1[40] = 3;
    //         cond = (cond && ((v >= v1) == (ft_v >= ft_v1)));
    //     }
    //     EQUAL(cond);
    // }
    // std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " swap "
    //           << "] --------------------]\t\t\033[0m";
    // {
    //     /*
    //      * strings to store the resutls
    //      */
    //     std::string str, ft_str;
    //     /*
    //      * var to store the size and the capacity
    //      */
    //     ft::vector<std::string>::size_type s, ft_s;
    //     ft::vector<std::string>::size_type c, ft_c;
    //     ft::vector<std::string>::iterator b1, b2;
    //     /*
    //      * bool to store the comparison
    //      */
    //     bool cond;

    //     /*---------------------------------- test 1: equal size vectors ----------------------*/
    //     {
    //         std::vector<std::string> v(200, "hello");
    //         std::vector<std::string> v1(200, "string");
    //         ft::vector<std::string> ft_v(200, "hello");
    //         ft::vector<std::string> ft_v1(200, "string");

    //         b1 = ft_v.begin();
    //         b2 = ft_v1.begin();

    //         swap(v, v1);
    //         swap(ft_v, ft_v1);

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && ((&*b2) == (&(*ft_v.begin()))));
    //         cond = (cond && ((&*b1) == (&(*ft_v1.begin()))));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     /*---------------------------------- test 2: lhs > rhs ----------------------*/
    //     {
    //         std::vector<std::string> v(200, "hello");
    //         std::vector<std::string> v1(50, "string");
    //         ft::vector<std::string> ft_v(200, "hello");
    //         ft::vector<std::string> ft_v1(50, "string");

    //         b1 = ft_v.begin();
    //         b2 = ft_v1.begin();

    //         swap(v, v1);
    //         swap(ft_v, ft_v1);

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && ((&*b2) == (&(*ft_v.begin()))));
    //         cond = (cond && ((&*b1) == (&(*ft_v1.begin()))));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     /*---------------------------------- test 2: lhs < rhs ----------------------*/
    //     {
    //         std::vector<std::string> v(50, "hello");
    //         std::vector<std::string> v1(200, "string");
    //         ft::vector<std::string> ft_v(50, "hello");
    //         ft::vector<std::string> ft_v1(200, "string");

    //         b1 = ft_v.begin();
    //         b2 = ft_v1.begin();

    //         swap(v, v1);
    //         swap(ft_v, ft_v1);

    //         s = v.size();
    //         ft_s = ft_v.size();
    //         c = v.capacity();
    //         ft_c = ft_v.capacity();
    //         for (size_t i = 0; i < v.size(); ++i)
    //             str += v[i];
    //         for (size_t i = 0; i < ft_v.size(); ++i)
    //             ft_str += ft_v[i];

    //         cond = (cond && (str == ft_str) && (s == ft_s) && (c == ft_c));
    //         cond = (cond && ((&*b2) == (&(*ft_v.begin()))));
    //         cond = (cond && ((&*b1) == (&(*ft_v1.begin()))));
    //     }
    //     /*--------------------------------------------------------------------------------------------*/
    //     EQUAL(cond);
    // }
    std::cout << "\033[1;36m\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m\n\n";
	std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " erase method (single element) "
              << "] --------------------]\t\t\033[0m";
    {
        /*
         * strings to store the resutls
         */
        std::string str, ft_str;
        /*
         * var to store the size and the capacity
         */
        ft::vector<std::string>::size_type s, ft_s;
        ft::vector<std::string>::size_type c, ft_c;
        /*
         * bool to store the comparison
         */
        bool cond;

        std::vector<std::string> v(200, "hello");
        ft::vector<std::string> ft_v(200, "hello");
        ft::vector<std::string>::iterator valid_it;
        std::vector<std::string>::iterator it;
        ft::vector<std::string>::iterator ft_it;
        valid_it = ft_v.begin() + 99;
        it = v.erase(v.begin() + 100);
        ft_it = ft_v.erase(ft_v.begin() + 100);
        ft_it->length();

        s = v.size();
        ft_s = ft_v.size();
        c = v.capacity();
        ft_c = ft_v.capacity();
        for (size_t i = 0; i < v.size(); ++i)
		{
            str += v[i];
			// std::cout << v[i] << std::endl;
		}
		std::cout << "ft_v " << std::endl;
        for (size_t i = 0; i < ft_v.size(); ++i)
		{
            ft_str += ft_v[i];
			// std::cout << v[i] << std::endl;
		}
		// std::cout << (str == ft_str) << " " << (s == ft_s) << " " << (c == ft_c) << " " << (&(*valid_it) == &(*(ft_v.begin() + 99))) << " dhjd " << std::endl;
        cond = ((str == ft_str) && (s == ft_s) && (c == ft_c) && (&(*valid_it) == &(*(ft_v.begin() + 99))));
		// std::cout << (str == ft_str) << " " << (s == ft_s) << " " << (c == ft_c) << " " << (&(*valid_it) == &(*(ft_v.begin() + 99))) << " dhjd " << std::endl;
        cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
        EQUAL(cond);
    }

    std::cout << "\033[1;37m[-------------------- [" << std::setw(40) << std::left << " erase method (range) "
              << "] --------------------]\t\t\033[0m";
    { 
        /*
         * strings to store the resutls
         */
        std::string str, ft_str;
        /*
         * var to store the size and the capacity
         */
        ft::vector<std::string>::size_type s, ft_s;
        ft::vector<std::string>::size_type c, ft_c;
        std::vector<std::string>::iterator it;
        ft::vector<std::string>::iterator ft_it;
        /*
         * bool to store the comparison
         */
        bool cond;
        /*------------------ test 1: erase from the begin to end -------------------*/
        {
            std::vector<std::string> v(100, "hello");
            ft::vector<std::string> ft_v(100, "hello");

            it = v.erase(v.begin(), v.end());
            ft_it = ft_v.erase(ft_v.begin(), ft_v.end());

            s = v.size();
            ft_s = ft_v.size();
            c = v.size();
            ft_c = ft_v.size();
            for (size_t i = 0; i < v.size(); ++i)
                str += v[i];
            for (size_t i = 0; i < ft_v.size(); ++i)
                ft_str += ft_v[i];
            cond = ((str == ft_str) && (s == ft_s) && (c == ft_c));
            cond = (cond && (std::distance(v.begin(), it) == std::distance(ft_v.begin(), ft_it)));
        }
	}

// erasing from vector

//   ft::vector<int> myvector;

//   // set some values (from 1 to 10)
//   for (int i=1; i<=10; i++) myvector.push_back(i);
//   std::cout << *(myvector.begin() + 5) << std::endl;

//   // erase the 6th element
//   myvector.erase (myvector.begin() + 5 );

//   // erase the first 3 elements:
//   myvector.erase (myvector.begin(),myvector.begin());

//   std::cout << "myvector contains: size = " << myvector.size() << std::endl;
//   for (unsigned i=0; i<myvector.size(); ++i)
//     std::cout << ' ' << myvector[i];
//   std::cout << '\n';
	return (0);
}

// TODO : chaba SFINAE !!!