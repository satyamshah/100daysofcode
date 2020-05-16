#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int digits(int a)
{
	int c = 0;
	while (a != 0)
	{
		a = a / 10;
		c++;
	}
	return c;
}

bool compare(int a, int b)
{
	int flag = 1;
	int x = digits(a);
	int y = digits(b);
	int q = a / (pow(10, x));
	int w = b / (pow(10, y));
	if (q > w)
	{
		return a < b;
	}
	else if (q < w)
	{
		return a > b;
	}
	else
	{
		int maxi = max(x, y);
		for (int i = 1; i <= maxi; i++)
		{
			q = a / (pow(10, x - i));
			w = b / (pow(10, x - i));
			if (q > w)
			{
				return a < b;
			}
			else if (q < w)
			{
				return a > b;
			}

		}
		return a < b;

	}
}
int main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n, compare);

		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}




		t--;
	}
	return 0;
}