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

int count(node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return (count(root->left) + count(root->right) + 1);
}

int sum(node* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return (sum(root->left) + sum(root->right) + root->data);
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	node*root = buildtree();

	cout << count(root) << endl;
	cout << sum(root);
	return 0;
}

