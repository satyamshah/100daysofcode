#include<bits/stdc++.h>
using namespace std;

int main()
{



	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int k, sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> k;
			sum += k;

		}
		if (n == 1)
		{
			cout << "T" << endl;
		}
		else
		{
			if ((n % 2 != 0) && (sum % 2 == 0))
				cout << "HL" << endl;
			else if ((n % 2 != 0) && (sum % 2 != 0))
				cout << "T" << endl;
			else if ((n % 2 == 0) && (sum % 2 == 0))
				cout << "HL" << endl;
			else if ((n % 2 == 0) && (sum % 2 != 0))
				cout << "T" << endl;
		}


	}
}