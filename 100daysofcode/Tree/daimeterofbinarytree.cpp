#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
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
	root->data = d;
	root->left = buildtree();
	root->right = buildtree();
	return root;
}



int heightoftree(node* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int lh = heightoftree(root->left);
	int rh = heightoftree(root->right);
	return (max(lh + rh) + 1);

}

int daimeteroftree(node* root)
{
	int a = heightoftree(root->left);
	int b = heightoftree(root->right);
	int c = a + b;
	int l = daimeteroftree(root->left);
	int r = daimeteroftree(root->right);
	return (max(c, l, b));

}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* root = buildtree();
	printtree(root);
	cout << endl;
	int h = heightoftree(root);
	cout << h << endl;
	int d = daimeteroftree(root);
	cout << d;

}
