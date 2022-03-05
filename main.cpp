#include <iostream>
#include <string>
#include <vector>
// advance example
#include <iterator>     // std::advance
#include <list>         // std::list

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
// * resizing vector
#include <iostream>
#include <vector>
#include "srcs/iterator.hpp"
#include "srcs/vector.hpp"
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

int main()
{
	ft::vector<int> v(4, 18);
	ft::vector<int>::iterator beg = v.begin();
	ft::vector<int>::iterator end = v.end();
	std::cout << "Capacity :" << v.capacity() <<std::endl;
	std::cout << *beg <<std::endl;
	end -= 1;
	*end = 55;
	std::cout << *end <<std::endl;
	try
	{
		v.resize(v.max_size() + 1, 44);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// v.resize(100, 44);
	// std::cout << "Capacity :" << v.capacity() <<std::endl;
	// beg = v.begin();
	// end = v.end();
	// std::cout << *beg <<std::endl;
	// std::cout << *--end <<std::endl;
	// for(ft::Vector<int>::iterator it = beg; it != end; ++it)
	// 	std::cout << *it <<std::endl;
	// std::cout << v.capacity() <<std::cout;
	return(0);
}
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