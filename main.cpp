/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:07:17 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/27 01:36:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
#include <map>
#include "srcs/map.hpp"
// #include "utility/red"

// struct node
// {
// 	node*	root;
// 	node*	child;

// 	node(void) : root(NULL), child(NULL) {}
// 	~node() {}
// };

// int main (void)
// {
// 	node ptr;
// 	std::cout << ptr.root << " " << ptr.child << std::endl;
// 	return 0;
// }

// int main (void)
// {
// 	// std::map<int, int> test;
// 	// std::map<int, int>::iterator it;// = test.begin();
// 	// int	k;

// 	// srand(time(NULL));
// 	// for (int i = 0; i < 20; i++)
// 	// {
// 	// 	k = rand();// % (i + 1);
// 	// 	test.insert(std::make_pair(k, k/2));
// 	// }
// 	// it = test.begin();
// 	// it--;
// 	// for (int i = 0; i < 20; i++)
// 	// {
// 	// 	std::cout << it->first << " " << it->second << std::endl;
// 	// }
// 	// ft::map<int, int> test;
// 	// ft::redBlackTree<ft::pair<int, int>, ft::map<int, int>::value_compare> test;
// 	// ft::map<int, int>::iterator a = test.begin();
// 	// std::cout << *a << std::endl;
// 	// ft::redBlackTree<ft::pair<int, int>, ft::map<int, int>::value_compare>::iterator it;
// 	ft::map<int, int> test;
// 	test._tree.rb_insert(ft::make_pair(0, 1));
// 	test._tree.rb_insert(ft::make_pair(1, 1));
// 	test._tree.rb_insert(ft::make_pair(2, 1));
// 	test._tree.rb_insert(ft::make_pair(3, 1));
// 	test._tree.rb_insert(ft::make_pair(4, 1));
	
// 	test._tree.printTree(*test._tree.root(), nullptr, false);
// 	// test.get_key();
// 	ft::map<int, int>::const_iterator end = test.end();
// 	ft::map<int, int>::const_iterator start = test.begin();
// 	// --end;
// 	// std::map<int,int>::key_compare mycomp = test.key_comp();
// 	// std::cout << mycomp((*++start).first, (*end).first) << std::endl;
// 	test._tree.bst_delete(2);
// 	test._tree.printTree(*test._tree.root(), nullptr, false);
	
// 	while (start != end)
// 	{
// 		std::cout << *start << std::endl;
// 		start++;
// 		// std::cout << "End 1 : " << end->first << " " << end->second << std::endl;
// 	}
// 	// test._tree.rb_insert(ft::make_pair(5, 1));
// 	// test._tree.rb_insert(ft::make_pair(6, 1));
// 	// test._tree.rb_insert(ft::make_pair(7, 1));
// 	// test._tree.rb_insert(ft::make_pair(8, 1));
// 	// test._tree.rb_insert(ft::make_pair(9, 1));
// 	// // &(*it)
// 	// --end;
// 	// test._tree.printTree(*(test._tree.get_root()), nullptr, false);
// 	// // std::cout << "Root 2 :  " << (*test._tree.get_root())->data << std::endl;
// 	// // std::cout << " H2 : " << *end << std::endl;
// 	// std::cout << "End 2 : " << end->first << " " << end->second << std::endl;
// 	// //std
// 	// {
// 	// 	std::map<int, int> test;
// 	// 	test.insert(std::make_pair(0, 1));
// 	// 	test.insert(std::make_pair(1, 1));
// 	// 	test.insert(std::make_pair(2, 1));
// 	// 	test.insert(std::make_pair(3, 1));
// 	// 	test.insert(std::make_pair(4, 1));
		
// 	// 	// test._tree.printTree(test._tree.get_root(), nullptr, false);
// 	// 	std::map<int, int>::const_iterator end = test.end();
// 	// 	std::map<int, int>::const_iterator start = test.begin();

// 	// 	// while (start != end)
// 	// 	// {
// 	// 	// 	--end;
// 	// 		// std::cout << end->first << std::endl;
// 	// 	// }
// 	// 	test.insert(std::make_pair(5, 1));
// 	// 	test.insert(std::make_pair(6, 1));
// 	// 	test.insert(std::make_pair(7, 1));
// 	// 	test.insert(std::make_pair(8, 1));
// 	// 	test.insert(std::make_pair(9, 1));
// 	// 	// &(*it)
// 	// 	--end;
// 	// 	// test._tree.printTree(test._tree.get_root(), nullptr, false);
// 	// 	std::cout << end->first << " " << end->second << std::endl;
// 	// }
// 	return 0;
// }
// // map::lower_bound/upper_bound
// #include <iostream>
// #include <map>

// int main ()
// {
//   ft::map<char,int> mymap;
// //   ft::map<char,int>::iterator itlow,itup;

//   mymap['a']=20;
//   mymap['b']=40;
//   mymap['c']=60;
//   mymap['d']=80;
//   mymap['e']=100;
// mymap._tree.printTree(*mymap._tree.root(), nullptr, false);
// //   itlow=mymap.lower_bound ('b');  // itlow points to b
// //   itup=mymap.upper_bound ('d');   // itup points to e (not d!)
// 	// std::cout << itlow<< std::endl;//<< " => " << it->second << '\n';
// //   mymap.erase(itlow,itup);        // erases [itlow,itup)

// //   print content:
// //   for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
// //     std::cout << it->first << " => " << it->second << '\n';

//   return 0;
// }

// map::insert (C++98)
// #include <iostream>
// #include <map>

// int main ()
// {
//   ft::map<char,int> mymap;

//   // first insert function version (single parameter):
//   mymap.insert ( ft::pair<char,int>('a',100) );
//   mymap.insert ( ft::pair<char,int>('z',200) );

//   ft::pair<ft::map<char,int>::iterator,bool> ret;
//   ret = mymap.insert ( ft::pair<char,int>('z',500) );
//   if (ret.second==false) {
//     std::cout << "element 'z' already existed";
//     std::cout << " with a value of " << ret.first->second << '\n';
//   }

//   // second insert function version (with hint position):
//   ft::map<char,int>::iterator it = mymap.begin();
//   mymap.insert (it, ft::pair<char,int>('b',300));  // max efficiency inserting
//   mymap.insert (it, ft::pair<char,int>('c',400));  // no max efficiency inserting

//   // third insert function version (range insertion):
//   ft::map<char,int> anothermap;
//   anothermap.insert(mymap.begin(),mymap.find('c'));

//   // showing contents:
//   std::cout << "mymap contains:\n";
//   for (it=mymap.begin(); it!=mymap.end(); ++it)
//     std::cout << it->first << " => " << it->second << '\n';

//   std::cout << "anothermap contains:\n";
//   for (it=anothermap.begin(); it!=anothermap.end(); ++it)
//     std::cout << it->first << " => " << it->second << '\n';

//   return 0;
// }

// map::begin/end
#include <iostream>
#include <map>

int main ()
{
  ft::map<char,int> mymap;

  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  // show content:
  for (ft::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}