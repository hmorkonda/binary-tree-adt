#include <iostream>
using namespace std;

struct node {
	int data;
	int height;
	node *left;
	node *right;

};

class AVLTree {
public:
	node *root == NULL;
	AVLTree() {
		root = NULL;
	}
	void makeEmpty(Node *t)
	{
		if (t == NULL)
			return;
		makeEmpty(t->left);
		makeEmpty(t->right);
		free(t);

	}
	node *insert(int x, node *t)
	{
		if (t == NULL)
		{
			t = new avl_node;
			t->data = x;
			t->left = NULL;
			t->right = NULL;
			return t;
		}
		else if (x < t->data)
		{
			t->left = insert(t->left, x);
			t = balance(t);
		}
		else if (x >= t->data)
		{
			t->right = insert(t->right, x);
			t = balance(t);
		}
		return t;

	}
	//ll
	node *singleLeftRotate(node * t)
	{
		avl_node *temp;
		temp = t->left;
		t->left = temp->right;
		temp->right = t;
		return temp;
	}
	//rr
	node *singleRightRotate(node *t)
	{
		avl_node *temp;
		temp = t->right;
		t->right = temp->left;
		temp->left = t;
		return temp;
	}
	//rl
	node *doubleRightRotate(node * &t) {
		avl_node *temp;
		temp = t->right;
		t->right = singleLeftRotate(temp);
		return singleRightRotate(parent);
	}
	//lr
	node *doubleLeftRotate(node * &t) {
		avl_node *temp;
		temp = t->left;
		parent->left = singleRightRotate(temp);
		return singleLeftRotate(t);
	}
	node *findMax(node *t) {
		if (t->right == NULL)
			return t;
		return findMax(t->right);
	}
	node *findMin(node *t) {
		if (t->left == NULL)
			return t;
		return findMax(t->right);
	}
	int height(node*t) {
		int h = 0;
		while (t != NULL) {
			int lh = height(t->left);
			int rh = height(t->right);
			int maxHeight = max(lh, rh);
			h = maxHeight + 1;
		}
		return h;
	}
	int getBalance(node *t) {

	}

	void inorder(node *t)
	{
		if (t == NULL)
			return;
		inorder(t->left);
		cout << data << endl;
		inorder(t->right);
	}
	void display(node *t, int level) {
		int i;
		if (t != NULL) {
			display(t->right, level + 1);
			cout << endl;
			if (t == root) {
				cout << "root-> ";
			}
			for (int i = 0; i < level && t != root; i++) {
				cout << "        ";
			}
			cout << t->data;
			display(t->left, level + 1);
		}
	}

};
int main() {
	std::cout << "Hello World!\n";

}








//*********************//
class AVLTree {
	void makeEmpty(NOde *t) {

	}node *inset(int x, node *t)

}