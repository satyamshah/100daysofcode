#include<bits/stdc++.h>
#include<climits>
using namespace std;

int ways(int n)
{
	if (n <= 3)
		return 1;

	return ways(n - 4) + ways(n - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << ways(n);


	return 0;
}
