/* sorting string lexicographically using stl & without using stl
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

Input Format:
N(integer) followed by N strings.

Constraints:
N<=1000

Output Format
N lines each containing one string.

Sample Input
3
bat
apple
batman
Sample Output
apple
batman
bat
*/
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string c[n][10];
    for(int i=0;i<n;i++)
    {
        getline(cin,c[i][10]);
    }
    sort(c,c+n);
     for(int i=0;i<n;i++)
    {
        cout<<c[i][n];
    }

	return 0;
}
