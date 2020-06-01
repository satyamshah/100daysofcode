#include<bits/stdc++.h>
using namespace std;

void naivematch(string a, string b)
{
	for (int i = 0; i <= a.size() - b.size(); i++)
	{
		int k = 0;
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i + j] == b[j])
			{
				k++;
			}
			else
			{
				break;
			}
		}
		if (k == b.size())
		{
			cout << "pattern at" << i << endl;
		}
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string a, b;
	cin >> a >> b;
	naivematch(a, b);
	return 0;
}