#include<bits/stdc++.h>
using namespace std;

class graph {
	int v;
	list<int> *l;              //since dynamic
public:
	graph(int v)
	{
		this->v = v;
		l = new list<int>[v]; //defining v lists dynamically
	}
	void addedge(int x, int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void printAdjlist(int v) {
		for (int i = 0; i < v; i++)
		{
			cout << endl;
			cout << "list" << i << "-";
			for (auto x : l[i])
			{
				cout << x << "->";
			}
		}

	}

};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	graph g(4);
	g.addedge(0, 3);
	g.addedge(3, 2);
	g.printAdjlist(4);


	return 0;
}