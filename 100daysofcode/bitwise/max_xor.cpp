#include<iostream>
using namespace std;
int main () {
	int x, y;
	cin >> x >> y;
	int ans;
	ans = x ^ y;
	int place = 0;
	while (ans > 0)
	{
		if ((ans & 1) == 1)
		{
			place++;
			ans = (ans & 0) << 1;
		}
		else {
			ans << 1;
		}
	}
	cout << pow(2, count) - 1;


	return 0;
}