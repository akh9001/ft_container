/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:07:17 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/22 16:14:50 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct node
{
	node*	root;
	node*	child;

	node(void) : root(NULL), child(NULL) {}
	~node() {}
};

int main (void)
{
	node ptr;
	std::cout << ptr.root << " " << ptr.child << std::endl;
	return 0;
}