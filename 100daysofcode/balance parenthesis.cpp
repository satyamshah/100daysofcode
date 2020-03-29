#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	string s;
	cin >> s;
	stack<char> st;
	int flag = 0;
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '[' || s[i] == '(' || s[i] == '{')
			st.push(s[i]);

		else if (s[i] == ']')
		{
			if (st.empty() || st.top() != '[')
			{
				flag = 1;
				break;

			}
			else
			{
				st.pop();
			}

		}


		else if (s[i] == '}')
		{
			if (st.empty() || st.top() != '{')
			{
				flag = 1;
				break;

			}
			else
			{
				st.pop();
			}

		}

		else if (s[i] == ')')
		{
			if (st.empty() || st.top() != '(')
			{
				flag = 1;
				break;

			}
			else
			{
				st.pop();
			}

		}
		i++;

	}
	if (flag == 1)
	{
		cout << "No";

	}
	else
		cout << "Yes";
	return 0;
}