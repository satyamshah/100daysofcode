#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if (n == 1)
		return 1;
	int ans = factorial(n * factorial(n - 1));
	return ans;
}

int main()
{
	int n = 5;
	int f = factorial(n);
	cout << f;
	return 0;
}
