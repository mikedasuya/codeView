#ifndef _BST__H
#define _BST__H

#include "node.h"
#include <vector>


template<class T>
class BST
{
	public:
	BST()
	{
		root = NULL;
	}
	/*
	* Balancing of tree is needed. TODO
	*/
	TreeNode<T> * createTree(std::vector<T> vect)
	{
		for(int i = 0; i < vect.size(); i++)
		{
//			addToTree(vect[i]);
			
		}
		return root;
	}
/*
				1
			|       |
			
			2       3

		|				|
						
		4               5
			|
			6
		|
		7
*/

	TreeNode<int> * createIntBinary()
	{
		addRootToTree(1);
		TreeNode<int> * node = new TreeNode<int>(2);
		root->left = node;

		node = new TreeNode<int>(3);
		root->right = node;
		
		node = new TreeNode<int>(4);
		root->left->left = node;
		
		node = new TreeNode<int>(6);
		root->left->left->right = node;
		
		node = new TreeNode<int>(7);
		root->left->left->right->left = node;
		
		node = new TreeNode<int>(5);
		root->right->right = node;

		return root;		
	}


	void addRootToTree(int data)
	{
		TreeNode<int> * node = new TreeNode<int>(data);
		if(root == NULL)
		{
			root = node;
		}
		
	}
	
	TreeNode<T> * root;

};

#endif
