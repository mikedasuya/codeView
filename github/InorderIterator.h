#ifndef __INORDER_ITER_H
#define __INORDER_ITER_H

#include "bst.h"
#include "node.h"
#include <stack>
#include <iostream>

using Node = TreeNode<int>;

class InorderIterator
{
	public:
	InorderIterator()
	{
		bst = new BST<int>();
		root = bst->createIntBinary();
		currentPtr = root;
	}

	void print()
	{
		if(currentPtr != NULL)
		{
			std::cout << currentPtr->data <<std::endl;
		}		
	}
	void getNext();
	private:
	void pushToStack(Node * ptr);
	BST<int> * bst;
	Node * root;
	Node * currentPtr;
	std::stack<Node *> st;

};



#endif
