//Lenght of longest subarray
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	unordered_map<int, int> m;
	int arr[] = { 1, 6, 9, -9, -6, 2, -2, 4 };
	int n = 8;
	int sum = 0;
	int l;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		if (m.find(sum) != m.end())
		{
			auto c = m.find(sum);
			l = max(l, i - (c->first));
		}

		if (sum == 0)
		{

			l = max(l, i);
		}

		m.insert(make_pair(i, arr[i]));
	}

	cout << l;

	return 0;
}

