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
		int k, l, x, y;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				x = digits(a[j]);
				y = digits(a[j + 1]);

				if ((a[j] / (pow(10, x - 1)) > (a[j + 1] / (pow(10, y - 1))))
				        swap(a[j], a[j + 1]);
				        else if ((a[j] / (pow(10, x - 1)) == (a[j + 1] / (pow(10, y - 1))))
				{
					if (a[j] < a[j + 1])
							swap(a[j], a[j + 1]);
					}

			}
		}

		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}




		t--;
	}
	return 0;
}