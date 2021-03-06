/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_tree.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:27:33 by akhalidy          #+#    #+#             */
/*   Updated: 2022/04/29 02:50:39 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <memory>
#include <string>
#define BLACK	0
#define RED		1
// #define RESET   "\033[0m"
// #define BLACKK   "\033[1m\033[30m"      /* Bold Black */
// #define REDD     "\033[31m"      		/* Red */

// ? Binary tree :
// * The binary tree are a type of tree where each node can have at most 2 childs.
// ? Binary search tree : BST
// * BST is a binary tree where every node in the left subtree if a node 'x' are less
// * than or equal to 'x' and every node in the right subtree are greater than or equal to 'x'.
// ! When I say node I mean the data (or key) of the node.
// * The height of a randomly generated binary search tree is O(log n).
// ? Successor and predecessor :
// * - Successor : is a node whose key is next key in the sorted order determined by an in-order walk.
// * - Predecessor : each node is the predecessor of the following node.
// To find the successor of a node x with key x.key :
// * 1 - If the right subtree of node x is non-empty,
// *  then the successor of x is just the leftmost node in x‘s right subtree.
// * 2 - If the right subtree of node x is empty and x has a successor y,
// * then y is the lowest ancestor of x whose left child is also an ancestor of x.

namespace ft
{
	template <class T1, class T2>
		struct pair;
	template <class T1, class T2>
		pair<T1, T2> make_pair (T1 x, T2 y);
	template <typename T>
	class bidirectional_iterator;
	//*************************************************************************
	//*																		  *
	//*							Node structure							  	  *
	//*																		  *
	//*************************************************************************		

	template <typename T>
	struct node
	{
		typedef T						value_type;
		typedef node*					pointer;
		typedef const node*				const_pointer;
		typedef node&					reference;
		typedef const node&				const_reference;
		
		//* Data :
		value_type	data;
		pointer		parent;
		pointer		left;
		pointer		right;
		bool		color;

		// * Member functions : 
		node(void) : parent(NULL), left(NULL), right(NULL), color(BLACK) {}
		node(pointer p, pointer l, pointer r, bool c) : parent(p), left(l), right(r), color(c) {}
		node(const_reference src) : data(src.data), parent(src.parent), left(src.left), right(src.right), color(src.color) {}
		node (value_type pair) : data(pair) {}
		reference operator=(const_reference src)
		{
			if (this == &src)
				return (*this);
			data = src.data;
			parent = src.parent;
			left = src.left;
			right = src.right;
			color = src.color;
			return (*this);
		}

		pointer	min(pointer x) const
		{
			if (x)
				while (x->left != NULL)
					x = x->left;
			return x;
		}
		
		pointer	max(pointer x) const
		{
			if (x)
				while (x->right != NULL)
					x = x->right;
			return x;
		}
		
		pointer	successor(pointer x) const
		{
			pointer	y;
			
			if (x->right != NULL)
				return (min(x->right));
			y = x->parent;
			while (y != NULL && x == y->right)
			{
				x = y;
				y = y->parent;
			}
			return y;
		}
		
		pointer	predecessor(pointer x) const
		{
			pointer	y;
			
			if (x->left != NULL)
				return (max(x->left));
			y = x->parent;
			while (y != NULL && x == y->left)
			{
				x = y;
				y = y->parent;
			}
			return y;
		}
		~node(void) {}
	};


	//! ***************************************************************************
	//! 																		  *
	//! 							red Black Tree							  	  *
	//! 																		  *
	//! ***************************************************************************	
	
	template <typename T, typename Key, typename Accesor, typename Compare, typename Alloc = std::allocator<T> >
	class redBlackTree
	{
		public:
			//* Member type	:
			typedef T													value_type;
			typedef Key													key_type;
			typedef Compare												key_compare;
			typedef ft::node<value_type>								node;
			typedef node*												node_ptr;
			typedef ft::node<const value_type> *						const_node_ptr;
			typedef typename ft::bidirectional_iterator<value_type>		iterator;
			// ? https://stackoverflow.com/questions/14148756/what-does-template-rebind-do
			typedef	typename Alloc::template rebind<node>::other		alloc_type;
			typedef	size_t												size_type;
			
			//* Constructor & destructor:
			redBlackTree(void) : _less(), _alloc(), _root(NULL), _size(0) {}
			
			~redBlackTree(void) { clear(_root);}
		
		//*************************************************************************
		//*																		  *
		//*								Geters									  *
		//*																		  *
		//*************************************************************************
			node_ptr*			root(void) { return &_root; }
			const_node_ptr*		root(void) const { return (const_node_ptr *)&_root; }
			node_ptr			begin(void) { return _root->min(_root); }
			const_node_ptr		begin(void) const { return (const_node_ptr)_root->min(_root); }
			size_type			size(void) const  {return _size;}
			size_type			max_size(void) const {return (_alloc.max_size());}
		//*************************************************************************
		//*																		  *
		//*								Print Tree								  *
		//*																		  *
		//*************************************************************************

			// // * Print constructed binary tree
			// struct Trunk
			// {
			// 	Trunk *prev;
			// 	std::string str;
			
			// 	Trunk(Trunk *prev, std::string str)
			// 	{
			// 		this->prev = prev;
			// 		this->str = str;
			// 	}
			// };
			
			// // Helper function to print branches of the binary tree
			// void showTrunks(Trunk *p)
			// {
			// 	if (p == nullptr) {
			// 		return;
			// 	}
			
			// 	showTrunks(p->prev);
			// 	std::cout << p->str;
			// }
			
			// void printTree(node_ptr root, Trunk *prev, bool isLeft)
			// {
			// 	if (root == nullptr) {
			// 		return;
			// 	}
			
			// 	std::string prev_str = "    ";
			// 	Trunk *trunk = new Trunk(prev, prev_str);
			
			// 	printTree(root->right, trunk, true);
			
			// 	if (!prev) {
			// 		trunk->str = "———";
			// 	}
			// 	else if (isLeft)
			// 	{
			// 		trunk->str = ".———";
			// 		prev_str = "   |";
			// 	}
			// 	else {
			// 		trunk->str = "`———";
			// 		prev->str = prev_str;
			// 	}
			
			// 	showTrunks(trunk);
			// 	if (root->color == BLACK)
			// 		std::cout  << BLACKK << " " << root->data << RESET << std::endl;
			// 	else
			// 		std::cout  << REDD << " " << root->data << RESET << std::endl;
			
			// 	if (prev) {
			// 		prev->str = prev_str;
			// 	}
			// 	trunk->str = "   |";
			
			// 	printTree(root->left, trunk, false);
			// }
		
		//*************************************************************************
		//*																		  *
		//*							Tree Utilities :							  *
		//*		 0 -  find														  *
		//*		 1 -  search													  *
		//*		 2 -  inoderprint												  *
		//*		 3 -  min														  *
		//*		 4 -  max														  *
		//*		 5 -  successor													  *
		//*		 6 -  predecessor												  *
		//*		 7 -  create_node												  *
		//*		 8 -  rb_transplant												  *
		//*		 9 -  clear														  *
		//*		10 -  swap														  *
		//*		11 -  lower_bound												  *
		//*		12 -  upper_bound												  *
		//*************************************************************************
			
			node_ptr	find(node_ptr x, key_type key)
			{
				if (x == NULL)
					return x;
				if (_less(key, Accesor()(x->data)))
					return find(x->left, key);
				else if (_less(Accesor()(x->data), key))
					return find(x->right, key);
				else
					return x;
			}
			
			const_node_ptr	find(const_node_ptr x, key_type key) const
			{
				if (x == NULL)
					return x;
				if (_less(key, Accesor()(x->data)))
					return find(x->left, key);
				else if (_less(Accesor()(x->data), key))
					return find(x->right, key);
				else
					return (const_node_ptr)x;
			}
			
			node_ptr	search(node_ptr x, value_type val)
			{
				key_type	key = Accesor()(val);

				if (x == NULL)
					return x;
				if (_less(key, Accesor()(x->data)))
					return search(x->left, val);
				else if (_less(Accesor()(x->data), key))
					return search(x->right, val);
				else
					return x;
			}

		// In-Order traversal
		// Left Subtree -> Node -> Right Subtree
			void		inoderprint(node_ptr x)
			{
				if (x != NULL)
				{
					inoderprint(x->left);
					std::cout << "data : (" << x->data << "), ";
					std::cout << "\n";
					inoderprint(x->right);
				}
			}

			node_ptr	min(node_ptr x) const
			{
				if (x)
					while (x->left != NULL)
						x = x->left;
				return x;
			}
			
			node_ptr	max(node_ptr x) const
			{
				if (x)
					while (x->right != NULL)
						x = x->right;
				return x;
			}
			
			node_ptr	successor(node_ptr x) const
			{
				node_ptr	y;
				
				if (x->right != NULL)
					return (min(x->right));
				y = x->parent;
				while (y != NULL && x == y->right)
				{
					x = y;
					y = y->parent;
				}
				return y;
			}
			
			node_ptr	predecessor(node_ptr x) const
			{
				node_ptr	y;
				
				if (x->left != NULL)
					return (max(x->left));
				y = x->parent;
				while (y != NULL && x == y->left)
				{
					x = y;
					y = y->parent;
				}
				return y;
			}

			node_ptr	create_node(value_type val, node_ptr parent)
			{
				node_ptr	new_node;
				
				new_node = _alloc.allocate(1);
				// _alloc.construct(new_node, node(val, NULL, parent));
				_alloc.construct(new_node, val);
				new_node->parent = parent;
				new_node->left = NULL;
				new_node->right = NULL;
				new_node->color = RED;
				// new_node->data = val;
				return new_node;
			}
			
			// * on relie v au parent de v.
			void	rb_transplant(node_ptr u, node_ptr v)
			{
				if (!u->parent)
					_root = v;
				else if (u == u->parent->left)
					u->parent->left = v;
				else
					u->parent->right = v;
				if (v)
					v->parent = u->parent;
			}
			//* Clear content
			void	clear(node_ptr root)
			{
				if (root == NULL)
					return;
				/* first delete both subtrees */
				clear(root->left);
				clear(root->right);
				rb_delete(Accesor()(root->data), false);
			}
			
			void	swap(redBlackTree& src)
			{
				std::swap(_less, src._less);
				std::swap(_alloc, src._alloc);
				std::swap(_root, src._root);
				std::swap(_size, src._size);
			}

			// // * lower bound :
			node_ptr	lower_bound(const key_type& key) 
			{
				node_ptr	beg = min(_root);
				node_ptr	end = max(_root);
				

				while (beg != end)
				{
					if (!_less(Accesor()(beg->data), key))
						return beg;
					beg = successor(beg);
				}
				if (!_less(Accesor()(beg->data), key))
					return beg;
				return (NULL);
			}
			
			const_node_ptr	lower_bound(const key_type& key) const
			{
				node_ptr	beg = min(_root);
				node_ptr	end = max(_root);
				

				while (beg != end)
				{
					if (!_less(Accesor()(beg->data), key))
						return (const_node_ptr)beg;
					beg = successor(beg);
				}
				if (!_less(Accesor()(beg->data), key))
					return (const_node_ptr)beg;
				return ((const_node_ptr)beg);
			}

		//*************************************************************************
		//* 																	  *
		//*								Rotation								  *
		//*																		  *
		//*					1- left_rotate										  *
		//*					1- right_rotate										  *
		//*																		  *
		//*************************************************************************
			
			void			left_rotate(node_ptr x)
			{
				node_ptr	y;

				//* set y
				y = x->right;
				//* turn y’s left subtree into x’s right subtree
				x->right = y->left;
				if (y->left != NULL)
					y->left->parent = x;
				//* link x’s parent to y
				y->parent = x->parent;
				if (x->parent == NULL)
					this->_root = y;
				else if (x == x->parent->left)
					x->parent->left = y;
				else
					x->parent->right = y;
				//* put x on y’s left
				y->left = x;
				x->parent = y;
			}
			
			void			right_rotate(node_ptr x)
			{
				node_ptr	y;
		
				y = x->left;
				x->left = y->right;
				if (y->right != NULL)
					y->right->parent = x;
				y->parent = x->parent;
				if (x->parent == NULL)
					this->_root = y;
				else if (x == x->parent->right)
					x->parent->right = y;
				else
					x->parent->left = y;
				y->right = x;
				x->parent = y;
			}
			
		//*************************************************************************
		//* 																	  *
		//*								Insertion								  *
		//*																		  *
		//*************************************************************************
			
			pair<node_ptr, bool>	bst_insert(value_type key)
			{
				node_ptr	x = _root;
				node_ptr	y = NULL;
				node_ptr	z = search(_root, key);
				// node_ptr	parent;

				if (!z)
				{
					while (x != NULL)
					{
						y = x;
						if (_less(Accesor()(key), Accesor()(x->data)))
							x = x->left;
						else
							x = x->right;
					}
					z = create_node(key, y);
					if (y == NULL)
						_root = z;
					else if (_less(Accesor()(key), Accesor()(y->data)))
						y->left = z;
					else
						y->right = z;
					_size += 1;
					return ft::make_pair(z, true);
				}
				return ft::make_pair(z, false);;
			}
			
			pair<iterator, bool>	rb_insert(value_type key)
			{
				pair<node_ptr, bool> p = bst_insert(key);
				node_ptr k = p.first;
				
				if (!_root)
					_root = k;
				while (k != _root && parent(k)->color == RED)
				{
					if (uncle(k) && uncle(k)->color == RED)
					{
						makeBlack(*parent(k));
						makeBlack(*uncle(k));
						if (grandParent(k) != _root)
							makeRed(*grandParent(k));
						k = grandParent(k);
					}
					else
					{
						if (parent(k) == grandParent(k)->right)
						{
							if (k == parent(k)->left)
							{
								// ? case 3.2.2 :: fist part
									k = k->parent;
									right_rotate(k);
							}
							// ? case 3.2.1 && second part of 3.2.2
							grandParent(k)->color = RED;
							parent(k)->color = BLACK;
							left_rotate(grandParent(k));
						}
						else
						{
							if (k == parent(k)->right)
							{
								// ? mirror case 3.2.2 :: fist part
								k = k->parent;
								left_rotate(k);
							}
							// ? mirror case 3.2.1 && second part of 3.2.2
							grandParent(k)->color = RED;
							parent(k)->color = BLACK;
							right_rotate(grandParent(k));
						}
					}
				}
				_root->color = BLACK;
				return ft::make_pair(iterator(p.first, &_root), p.second);
			}
			
		//*************************************************************************
		//* 																	  *
		//*								Deletion								  *
		//*																		  *
		//*************************************************************************
		
		//? double black accurs when you move or remove a black node y,
		//? we transfer its blakness to x (y's original position).
		//? In other words, the extra black on a node is reflected in x's pointing to the node rather than in the color attribute.

		void	rb_delete_fix(node_ptr x, node_ptr x_parent, bool y_original_color)
			{
				if (y_original_color == BLACK)
				{
					// fixDelete(x);
					// * RB-DELETE-FIXUP
					node_ptr	s;
					// node_ptr	p;
					while (x != _root && isBlack(x)) //? x always point to a nonroot, doubly black node : whithin the while loop 
					{
						x_parent = x != NULL ? parent(x) : x_parent;
						if (x == x_parent->left)
						{
							s = x_parent->right;
							// case 3.1 
							if (isRED(s))
							{
								s->color = BLACK;
								x_parent->color = RED;
								left_rotate(x_parent);
								s = x_parent->right;
							}
							// case 3.2
							if (isBlack(s->left) && isBlack(s->right))
							{
								s->color = RED;
								x = x_parent;
							}
							else
							{
								if (isBlack(s->right))
								{
									// case 3.3
									s->left->color = BLACK;
									s->color = RED;
									right_rotate(s);
									s = x_parent->right;
								}
								// case 3.4
								s->color = x_parent->color;
								x_parent->color = BLACK;
								if (s->right)
									s->right->color = BLACK;
								left_rotate(x_parent);
								x = _root;
							}
						}
						else
						{
							s = x_parent->left;
							if (s->color == RED)
							{
								s->color = BLACK;
								x_parent->color = RED;
								right_rotate(x_parent);
								s = x_parent->left;
							}
							if (isBlack(s->right) && isBlack(s->left))
							{
								s->color = RED;
								x = x_parent;
							}
							else
							{
								if (isBlack(s->left))
								{
									// case 3.3
									s->right->color = BLACK;
									s->color = RED;
									left_rotate(s);
									s = x_parent->left;
								}
								// case 3.4
								s->color = x_parent->color;
								x_parent->color = BLACK;
								if (s->left)
									s->left->color = BLACK;
								right_rotate(x_parent);
								x = _root;
							}
						}
					}
					x->color = BLACK;
				}
			}
			
			bool	rb_delete(key_type key, bool balance)
			{
				node_ptr	z; // the node to be deleted
				node_ptr	y; // z's successor
				node_ptr	x; // x : y's child, which takes y's place in the tree. Before being deleted.
							// x : keeps track of y's original position 
				node_ptr	x_parent;
				bool		y_original_color;
				
				z = find(_root, key);
				if (!z)
					return false;
				if (z == _root && !z->right && !z->left)
				{
					_root = NULL;
					_alloc.destroy(z);
					_alloc.deallocate(z, 1);
					_size--;
					return true;
				}
				y = z;
				y_original_color = y->color;
				if (!z->left)
				{
					x = y->right;
					if (!x)
						x_parent = y->parent;
					rb_transplant(z, z->right); // replace z by its right child
				}
				else if (!z->right)
				{
					x = y->left;
					if (!x)
						x_parent = y->parent;
					rb_transplant(z, z->left); // replace z by its left child
				}
				else
				{
					y = min(z->right); // y is the successor.
					y_original_color = y->color;
					x = y->right;
					if (!x)
						x_parent = y->parent;
					if (y->parent == z)
						x_parent = y;
					else
					{
						// swap y and its right so y become a leaf node
						// so it becomes easier to remove z.
						rb_transplant(y, y->right);
						y->right = z->right;
						y->right->parent = y;
					}
					rb_transplant(z, y);
					y->left = z->left;
					y->left->parent = y;
					y->color = z->color;
				}
				_alloc.destroy(z);
				_alloc.deallocate(z, 1);
				_size--;
				if (balance)
					rb_delete_fix(x, x_parent, y_original_color);
				return true;
			}
		//*************************************************************************
		//*																		  *
		//*							Help Functions : 							  *
		//*																		  *
		//*************************************************************************	
		
			private :

			bool			isBlack(node_ptr x) {return (!x || x->color == BLACK);}
			bool			isRED(node_ptr x) {if (!x) return false; return (x->color == RED);}
			void			makeBlack(node& x) {x.color = BLACK;}
			void			makeRed(node& x) {x.color = RED;}
			bool			isRoot(node_ptr x) {return (x == _root);}
			node_ptr		parent(node_ptr x) {return (x->parent);}
			node_ptr		sibling(node_ptr x)
			{
				if (x == parent(x)->left)
					return(parent(x)->right);
				else
					return(parent(x)->left);
			}
			node_ptr		grandParent(node_ptr x) {return(parent(parent(x)));}
			node_ptr		uncle(node_ptr x)
			{
				if (parent(x) == grandParent(x)->left)
					return grandParent(x)->right;
				return grandParent(x)->left;
			}

		//*************************************************************************
		//*																		  *
		//*							Data Member : 								  *
		//*																		  *
		//*************************************************************************		

			key_compare		_less;
			alloc_type		_alloc;
			node_ptr		_root;
			size_type		_size;
	};
}
