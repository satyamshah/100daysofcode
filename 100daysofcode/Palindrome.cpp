#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char* c)
{
	int i = 0;
	int j = strlen(c) - 1;
	while (i < j)
	{
		if (c[i] == c[j])
		{
			i++;
			j--;
		}
		else
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	cin >> n;
	char c[n];
	cin >> c;
	if (ispalindrome(c))
	{
		cout << "palindrome";
	}
	else
		cout << "notpalindrome";
}