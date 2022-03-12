#include <iostream>
#include <string>
#include <vector>
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
#include "srcs/iterator.hpp"
#include "srcs/vector.hpp"

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
	// for(ft::Vector<int>::iterator it = beg; it != end; ++it)
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
#include <iostream>
#include <vector>
#include <list>

template <typename T>
void write_vector(const ft::vector<T>& v)
{
   std::cout << "The numbers in the vector are: " << std::endl;
//    std::cout << v 
//    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
}

void comp(int num)
{
	std::cout << "yes" << std::endl;
}

void comp(char notnum)
{
	std::cout << "no" << std::endl;
}

// void contructor()
// {
// 	comp(this->iterator::iterator_category);
// }
void algorithm_signed  (int i) { std::cout << "T is int, include algorithm_signed()" << std::endl; } 

void algorithm_unsigned(unsigned u) { std::cout << "T is unsigned int, include algorithm_unsigned()" << std::endl; } 

template <typename T>
void algorithm(T t)
{
    if (std::is_signed<T>::value)
        algorithm_signed(t);
    else
    if (std::is_unsigned<T>::value)
        algorithm_unsigned(t);
    else
        static_assert(std::is_signed<T>::value || std::is_unsigned<T>::value, "Must be signed or unsigned!");
}
#include <iostream>
int main ()
{
	// std::list<int> li(4, 100);
	// ft::vector<int> vi(li.begin(), li.end());
	// std::istream_iterator<int> begin(std::cin), end;
	// ft::vector<int> v(begin, end);
	// int yes = 11;
	// comp(11);
	// write_vector(v);
	//  try {

	// {
	// 	ft::vector<int> myvector (3,100);
	// 	myvector.push_back(42);
	// 	ft::vector<int>::iterator it;
	// 	ft::vector<int> myvec ( myvector.begin()+3, myvector.begin() + 4);
	// 	std::cout << "myvector contains:";
	// 	for (it=myvector.begin(); it != myvector.end(); it++)
	// 	std::cout << ' ' << *it;
	// 	std::cout << '\n';
	// 	std::cout << "myvector contains:";
	// 	for (it=myvec.begin(); it != myvec.end(); it++)
	// 	std::cout << ' ' << *it;
	// 	std::cout << '\n';
	// }
	{
		std::istream_iterator<int> start(std::cin);
		std::istream_iterator<int> end;

		const ft::vector<int> v(start, end);

		for (size_t i = 0; i < v.size(); i++)
			std::cout << v[i] << ' ';
		std::cout << std::endl;
	}
	//  }
	//  catch (std::exception e)
	//  {
	// 	 std::cout << e.what() << std::endl;
	//  }
	
	// it = myvector.begin();
	// it = myvector.insert ( it , 200 );
	
	// myvector.insert (it,2,300);
	
	// // "it" no longer valid, get a new one:
	// it = myvector.begin();
	
	// std::vector<int> anothervector (2,400);
	// myvector.insert (it+2,anothervector.begin(),anothervector.end());
	
	// int myarray [] = { 501,502,503 };
	// myvector.insert (myvector.begin(), myarray, myarray+3);
	
	// {
	// 	algorithm(3);       // T is int, include algorithm_signed()

	// 	unsigned x = 3;
	// 	algorithm(x);       // T is unsigned int, include algorithm_unsigned()

	// 	algorithm("hello"); // T is string, build error!
	// }
	return 0;
}