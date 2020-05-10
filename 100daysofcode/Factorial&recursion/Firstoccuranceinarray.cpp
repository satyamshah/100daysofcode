#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int f, int l, int key)
{
	while (l >= f)
	{
		int mid = (f + l) / 2;
		if (arr[mid] == key && arr[mid - 1] != key)
		{
			return mid;
		}
		if (arr[mid] < key)
		{
			f = mid - 1;
		}
		else
		{
			l = mid + 1;

		}
	}
	return 0;

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {2, 4, 6, 6, 6, 6, 6, 8};
	int j;
	cin >> j;
	int k = firstocc(arr, 0, 7, j);
	cout << k;



	return 0;
}


