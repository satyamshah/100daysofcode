#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkodd(int a)
{
	return (a & 1);
}
bool findbit(int n, int i)
{
	int mask = (1 << i);
	int bit = (n & mask) > 0 ? 1 : 0;
	return bit;
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, i;
	cin >> n;
	//cout << checkodd(n);
	cin >> i;
	//cout << findbit(n, i);



	return 0;
}

