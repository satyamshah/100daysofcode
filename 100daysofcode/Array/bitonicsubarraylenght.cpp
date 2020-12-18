#include <bits/stdc++.h>
using namespace std;

int bitonicarraylenght(int arr[], int n)
{
    int count1 = 0;
    int count2 = 0;
    int maxcount = 0;
    int i = 0;

    //for increasing,increasing-decreasing
    while (i < n)
    {
        if (arr[i] <= arr[i + 1] && (i + 1) < n)
        {
            while (arr[i] <= arr[i + 1] && (i + 1) < n)
            {
                i++;
                count1++;

            }
            while (arr[i] >= arr[i + 1] && (i + 1) < n)
            {
                i++;
                count1++;
            }
            maxcount = max(maxcount, count1);
            count1 = 0;

        }
        //for decreasing
        else if (arr[i] >= arr[i + 1] && (i + 1) < n)
        {
            while (arr[i] >= arr[i + 1] && (i + 1) < n)
            {
                i++;
                count2++;
            }
            maxcount = max(maxcount, count2);
            count2 = 0;
        }
    }


    return maxcount;
}

int main()
{


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << bitonicarraylenght(a, n) << "\n";


        t--;
    }
    return 0;
}