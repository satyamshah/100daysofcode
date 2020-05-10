#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}


};

node* buildtree()
{
	int d;
	cin >> d;
	if (d == -1)
	{
		return NULL;
	}

	node* root = new node(d);
	root->left = buildtree();
	root->right = buildtree();
	return root;
}

void printpreorder(node* root)
{
	if (root == NULL)
		return;
	cout << root->data;
	printpreorder(root->left);
	printpreorder(root->right);

}
void printinorder(node* root)
{
	if (root == NULL)
		return;
	printinorder(root->left);
	cout << root->data;
	printinorder(root->right);

}
void printpostorder(node* root)
{


	if (root == NULL)
		return;
	printinorder(root->left);
	printinorder(root->right);
	cout << root->data;


}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node*root = buildtree();
	printpreorder(root);
	printinorder(root);
	printpostorder(root);

	return 0;
}

