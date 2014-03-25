/*this is following this instruction:
http://www.cprogramming.com/tutorial/lesson18.html
*/




#include <iostream>

using namespace std;


typedef struct Node
{
	int data;
	Node *left;
	Node *right;
}Node;

class BTree
{
	private:
	Node *root;
	void treeinsert(int key, Node *leaf);//based on the public function: treeinsert below,
	// this one is called inside the treesearch so that you can recursivly insert the node inside of the tree.


	public:
	BTree();
	~BTree();
	void treeinsert(int key);
	void treesearch(int key);
	void treedelet();
	int treeNLRprint(Node *node);
	int treeLNRprint(Node *node);
	int treeLRNprint(Node *node);

};

BTree::BTree()
{
	root = NULL;
}

void BTree::treeinsert(int key)
{
	if (root == NULL)
	{
		root = new Node;
		root->data = key;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		treeinsert(key, root);
	}
	treeNLRprint(root);
	cout<<endl;
}
void BTree::treeinsert(int key, Node *leaf)
{
	if(key<leaf->data)
	{
		if(leaf->left != NULL)
		{
			treeinsert(key,leaf->left);
		}
		else
		{
			leaf->left = new Node;
			leaf->left->data = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}
        else if(key>leaf->data)
	{
		if(leaf->right != NULL)
		{
			treeinsert(key,leaf->right);
		}
		else
		{
			leaf->right = new Node;
			leaf->right->data = key;
			leaf->right->left = NULL;
			leaf->right->right = NULL;
		}
	}
}


void BTree::treesearch(int data)
{
	Node *temp;
	temp = root;
	while(temp->data != 0)
	{
		if(temp->data > data)
		{
			temp = temp->right;
		}
		else if(temp->data < data)
		{
			temp = temp->right;
		}
		else
			cout<<"find the data in the tree"<<endl;
	}
}



/*void BTree::treeinsert(int data)
{
	Node *temp;
}*/

//this is preorder traversal and print the tree
//Using recresive way

int BTree::treeNLRprint(Node *node)
{
	cout<<node->data<<' ';
	if(node->left != NULL)
	{
		treeNLRprint(node -> left);
	}
	if(node->right != NULL)
	{
		treeNLRprint(node -> right);
	}
	return 1;
}



BTree::~BTree()
{
}


int main()
{
	BTree t1;
	t1.treeinsert(8);
	t1.treeinsert(3);
	t1.treeinsert(1);
	t1.treeinsert(6);
	t1.treeinsert(4);
	t1.treeinsert(7);
	t1.treeinsert(10);
	t1.treeinsert(14);
	t1.treeinsert(13);
//	t1.treesearch(10);
	t1.treeNLRprint(root);
	return 0;
}


