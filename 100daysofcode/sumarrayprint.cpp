#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[n];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	int sum = 0;
	
	//generating subarray and maximun sum in o(n^3)
	for (int i = 0; i < n; i++)
	{
		
		for (int j = i; j < n; j++)
		{
			int rsum = 0;
			for (int k = i; k <= j; k++)
			{
				cout << arr[k]<<",";
				rsum = rsum + arr[k];
			}
			if (rsum > sum)
				sum = rsum;
			cout << endl;

		}

	}
	cout << sum;
	return 0;
}

