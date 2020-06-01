#include<bits/stdc++.h>
using namespace std;




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