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
	long long int n;
	cin >> n;
	int q = digits(n);
	char ch[q];

	for (int i = 0; i < q; i++)
	{
		int a = n % 10;
		if (i != n - 1 && a == 9)
		{
			ch[i] = a + 48;
		}
		else
		{
			a = min(a, 9 - a);
			ch[i] = a + 48;
		}


		n = n / 10;
	}
	int i = 0;
	int j = q - 1;
	while (i != j)
	{
		char temp = ch[i];
		ch[i] = ch[j];
		ch[j] = temp;
		i++;
		j--;

	}
	for (int i = 0; i < q; i++)
	{
		cout << ch[i];
	}
	return 0;
}
