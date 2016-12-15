#include "InorderIterator.h"

void InorderIterator::pushToStack(Node * ptr)
{
	while(ptr != NULL)
	{
		st.push(ptr);
		ptr = ptr->left;
	}
	currentPtr = st.top();
	st.pop();
}

void InorderIterator::getNext()
{
	if(currentPtr != NULL && currentPtr->left == NULL &&
	   currentPtr->right == NULL)
	{
		if(st.size() == 0)
		{
			currentPtr = NULL;
		}
		else
		{
			currentPtr = st.top();
		}
	
	} 	
	else if(currentPtr != NULL && currentPtr->left != NULL)
	{
		if(st.size() != 0 && currentPtr->data == st.top()->data)
		{
			if(currentPtr->right != NULL)
			{	
				st.pop();
				pushToStack(currentPtr->right);
			}
			else
			{
				st.pop();
				if(st.size() != 0)
				{
					currentPtr = st.top();
				}
				else
				{
					currentPtr = NULL;
				}
			}
			
		}
		else
		{
			st.push(currentPtr);
			currentPtr = currentPtr->left;
		}
		
	
	}
	else if(currentPtr != NULL && currentPtr->right != NULL)
	{
		if(currentPtr->data == st.top()->data)
		{
			st.pop();
		}
		pushToStack(currentPtr->right);
		
	}
	
}
