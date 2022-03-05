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
//* resizing vector
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
	ft::Vector<int> v(5, 18);
	ft::Vector<int>::iterator beg = v.begin();
	ft::Vector<int>::iterator end = v.end();
	std::cout << v.capacity() <<std::cout;
	std::cout << v.capacity() <<std::cout;
	v.resize(100);
	for(ft::Vector<int>::iterator it = beg; it != end; ++it)
		std::cout << *it <<std::cout;
	return(0);
}