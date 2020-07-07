#include<bits/stdc++.h>
using namespace std;
class graph
{
	unordered_map<string, list<pair<string, int>>> m;
	bool*visited;
public:
	void addedge(string x, string y, int k, bool bid)
	{
		m[x].push_back(make_pair(y, 50));
		if (bid)
			m[y].push_back(make_pair(x, 50));
	}

	void printAdjlist() {
		for (auto i : m)
		{
			string edge = i.first;
			list<pair<string, int>> l = i.second;
			for (auto j : l)
			{
				cout << j.first << j.second;
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
	graph g;
	g.addedge("A", "D", 50, 0);
	g.addedge("A", "B", 20, 1);
	g.printAdjlist();


	return 0;
}