#include<bits/stdc++.h>
using namespace std;

int higestfactor(int n)
{
	if (n % 2 == 0)
		return n / 2;
	else
	{
		for (int i = n - 1; i > 0; i--)
		{
			if (n % i == 0)
				return n / i;
		}
	}
	return 1;
}

int main()
{

	int m, n;
	cin >> m >> n;
	if (m == n)
		cout << 0;
	else
	{

		vector<int>a;
		vector<int>b;
		int flag = 0;

		while (flag != 1)
		{
			flag = higestfactor(m);
			a.push_back(flag);
			m = flag;

		}
		flag = 0;
		while (flag != 1)
		{
			flag = higestfactor(m);
			b.push_back(flag);
			m = flag;
		}
		int count = 0;
		int i = 0, j = 0;
		flag = 1;
		int s_a = a.size();
		int s_b = b.size();
		while (flag != 0)
		{
			if (a[i] > b[j])
			{
				i++;

			}
			else if (a[i] < b[j])
			{
				j++;
			}
			else if (a[i] == b[j])
			{
				break;
			}
			else if (i == s_a - 1 && j == s_b - 1)
			{
				flag = 0;
			}
		}

		cout << i + j + 2;
	}
}