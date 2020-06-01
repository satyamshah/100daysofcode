#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int>p1, pair<int, int>p2)
{
	return p1.second < p2.second;
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<pair<int, int>> v;
		int a, b;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}
		sort(v.begin(), v.end(), compare);
		int count = 1;
		int fin = v[0].second;
		for (int i = 1; i < n; i++)
		{
			if (v[i].first >= fin)
			{
				fin = v[i].second;
				count++;
			}
		}
		cout << count << endl;
		v.clear();

	}

	return 0;
}