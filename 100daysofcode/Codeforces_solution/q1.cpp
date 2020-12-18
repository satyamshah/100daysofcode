#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		unordered_map<char, int> m;
		string s;
		int l;
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			l = s.length();
			for (int j = 0; j < l; j++)
			{
				if (m.find(s[j]) == m.end()) {
					m.insert(make_pair(s[j], 1));
				}
				else {
					m[s[j]]++;
				}
			}

		}
		int k, flag = 1;
		for (auto i : m)
		{
			k = i.second ;
			if (k % n != 0)

				flag = 0;
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}


}