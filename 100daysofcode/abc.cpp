#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x = -5, y = 2;
	y = x ? ++y + x : y-- -x;
	cout << y;
	return 0;
}