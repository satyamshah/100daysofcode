#include<bits/stdc++.h>
#include<climits>
using namespace std;

int minsteps(int n, int dp[])
{
	//Base case
	if (n == 0)
		return 0;
// lookup
	if (dp[n] != 0)
		return dp[n];
//recurcise case
	int opt1, opt2, opt3;
	opt1 = opt2 = opt3 = INT_MAX;

	if (n % 2 == 0)
	{
		opt2 = minsteps(n / 2, dp) + 1;
	}
	if (n % 3 == 0)
	{
		opt3 = minsteps(n / 3, dp) + 1;
	}
	opt1 = minsteps(n - 1, dp) + 1;
	return dp[n] = min(min(opt1, opt2), opt3);


}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	int dp[n] = {0};
	cout << minsteps(n, dp);

	return 0;
}
