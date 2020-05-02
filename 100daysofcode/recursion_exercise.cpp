#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int b)
{
	if (b == 0)
		return 0;
	if (b < 0)
	{
		if (a > 0)
			return (-a + multiply(a, b + 1));
		else
			return (a + multiply(a, b + 1));
	}


	return (a + multiply(a, b - 1));
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int a = 3;
	int b = 5;
	cout << multiply(a, b);

	return 0;
}

