/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:07:17 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/23 21:49:38 by akhalidy         ###   ########.fr       */
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

int main (void)
{
	// std::map<int, int> test;
	// std::map<int, int>::iterator it;// = test.begin();
	// int	k;

	// srand(time(NULL));
	// for (int i = 0; i < 20; i++)
	// {
	// 	k = rand();// % (i + 1);
	// 	test.insert(std::make_pair(k, k/2));
	// }
	// it = test.begin();
	// it--;
	// for (int i = 0; i < 20; i++)
	// {
	// 	std::cout << it->first << " " << it->second << std::endl;
	// }
	ft::map<int, int> test;
	// ft::redBlackTree<ft::pair<int, int>, ft::map<int, int>::value_compare> test;
	test._tree.rb_insert(ft::make_pair(0, 1));
	test._tree.rb_insert(ft::make_pair(1, 1));
	test._tree.rb_insert(ft::make_pair(2, 1));
	test._tree.rb_insert(ft::make_pair(3, 1));
	test._tree.rb_insert(ft::make_pair(4, 1));
	ft::map<int, int>::iterator a = test.begin();
	std::cout << *a << std::endl;
	// ft::redBlackTree<ft::pair<int, int>, ft::map<int, int>::value_compare>::iterator it;
	
	return 0;
}