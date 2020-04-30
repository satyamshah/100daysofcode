#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a = 3;
	int n = 5;
	int ans = 1;
	while (n > 0)
	{
		int lastbit = n & 1;
		if (lastbit == 1)
		{
			ans = ans * a;
		}
		a = a * a;
		n = n >> 1;
	}
	cout << ans;


	return 0;
}