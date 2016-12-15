#ifndef __NODE__H
#define __NODE__H
#include <cstddef>

template<class T>
class TreeNode
{
	public:

	TreeNode * left;
	TreeNode * right;
	T data;
	TreeNode(T da):left(NULL),right(NULL)
	{
		data = da;
	}
};

#endif //end struct
