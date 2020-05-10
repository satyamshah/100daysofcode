#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void primesieve(int arr[], int n)
{
	arr[0] = arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i <= n; i += 2)
	{
		arr[i] = 1;
		for (int j = i * i; j <= n; j += i)
			arr[j] = 0;
	}

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n] = {0};
	primesieve(arr, n);
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] == 1)
			cout << i << " ";
	}
	return 0;
}

