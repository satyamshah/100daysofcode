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


int heightoftree(node* root)
{
	if (root == NULL)
		return 0;
	int lh = heightoftree(root->left);
	int rh = heightoftree(root->right);
	return (max(lh, rh) + 1);
}

void printpreorder(node* root)
{
	if (root == NULL)
		return ;
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

void printkthlevel(node* root, int k)
{
	if (root == NULL)
	{
		return;
	}
	if (k == 1)
	{
		cout << root->data;
	}

	printkthlevel(root->left, k - 1);
	printkthlevel(root->right, k - 1);
	return ;
}

void printlevelorder(node* root)
{
	int h = heightoftree(root);
	for (int i = 1; i <= h; i++)
	{
		printkthlevel(root, i);
		cout << endl;
	}
	return;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node*root = buildtree();
	/*printpreorder(root);
	cout << endl;
	printinorder(root);
	cout << endl;
	printpostorder(root);
	cout << endl;
	cout << heightoftree(root);
	printkthlevel(root, 2);*/
	printlevelorder(root);

	return 0;
}

