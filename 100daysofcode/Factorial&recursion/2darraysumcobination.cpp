#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y;
	cin >> x >> y;
	int arr[x][y];
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> arr[i][j];
		}
	}
	int max = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < x; k++)
			{
				for (int l = 0; l < y; l++)
				{
					for (int m = i; m < k; m++)
					{
						for (int n = j; n < l; n++)
						{
							sum += arr[m][n];
						}
					}
					if (sum > max)
						max = sum;
				}
			}
		}
	}


	cout << max;



	return 0;
}

