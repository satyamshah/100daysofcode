#include<bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int arr[n];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	int j = 5;
	int arr1[n];

	for (int k = 0; k < n; k + 2)
	{
		arr1[k] = 0;
	}
	arr[2] = 1;

	for (int k = 3; k < n; k + 2)
	{

	}

	for (i = 4; i < n; i++)
	{
		if (i % 2 == 0)
		{
			arr[i] = arr[i - 2] + arr[i - 4];
		}
		else
		{
			arr[i] = prime[j];
			j++;
		}
	}
}