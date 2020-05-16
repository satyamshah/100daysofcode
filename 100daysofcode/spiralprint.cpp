#include<iostream>
using namespace std;
int main()
{
	int r, c;
	cin >> r >> c;
	int arr[r][c];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}
	int rmp = lmp = dmp = upm = 0;
	int r1 = 0;
	int c1 = c;
	int r2 = r - 1;
	int c2 = c - 1;
	int c3 = c - 1;
	int k = 0;

	while (((rmp + lmp) <= r) && ((dmp + upm) <= c))
	{

		for (int i = 0; i < c1 - 1; i++)
		{
			cout << arr[r1][i] << endl;

		}
		r1++;
		c1--;
		rmp++;
		while (c3 > )
		{
			cout << arr[i][c2] << endl;
		}
		k++


	}

	return 0;
}