#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, x;
	cin >> n >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> x;
	int l = 0;
	int i = 0;
	int j = m - 1;
	while (j >= 0 && i <= n - 1)
	{
		if (x == arr[i][j])
		{
			l = 1;
			break;
		}
		else if (x > arr[i][j])
		{
			i++;
		}
		else if (x < arr[i][j])
		{
			j--;
		}

	}

	cout << l;
	return 0;
}

