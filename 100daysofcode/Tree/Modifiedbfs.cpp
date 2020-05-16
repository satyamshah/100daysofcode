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

void bfs(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		node* f = q.front();
		if (f == NULL)
		{
			cout << endl;
			q.pop();
			if (!q.empty())
			{
				q.push(NULL);
			}

		}
		else

		{
			cout << f->data;
			q.pop();

			if (f->left != NULL)
			{
				q.push(f->left);
			}


			if (f->right != NULL)
			{
				q.push(f->right);
			}
		}

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
	bfs(root);


	return 0;
}

