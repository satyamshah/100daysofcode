#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
void reversestack(stack<int>& s1)
{
    stack<int>s2;
    int n = s1.size() - 1;
    for (int i = 0; i < n; i++)
    {
        int temp = s1.top();
        s1.pop();
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(temp);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
}
int main()
{
    stack<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        s.push(k);
    }
    reversestack(s);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

}