#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		s.push(k);
	}
	cout<<s.size()<<endl;
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}

}