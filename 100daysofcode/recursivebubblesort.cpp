#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int i, int j)
{

	if (i == 1)
	{
		return;
	}
	if (j = i)
	{
		return bubblesort(arr, i - 1, 0);
	}
	else if (j < i)
	{
		if (arr[j] > arr[j + 1])
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = arr[j];
		}
	}


	bubblesort(arr, i, j + 1);
	return;


}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 4, 2, 3, 6};

	bubblesort(arr, 5, 0);
	for (int i = 0; i < 5; i++)
		cout << arr[i];

	return 0;
}

