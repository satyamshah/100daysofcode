#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int i = 0;
    int x = 0;
    int max_x = 1;
    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            x = 2;
            i++;
            while (s[i] == s[i + 1])
            {
                x++;
                i++;
            }
            i--;
        }
        if (x > max_x)
        {
            max_x = x;
        }
        i++;
    }

    cout << max_x;
    return 0;

}