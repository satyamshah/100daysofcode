#include<iostream>
using namespace std;
int main() {
    char c[20];
    cin >> c;
    int i = 0;
    int j = 1;
    while (c[j] != '\0')
    {



        if (c[i] == c[j])
        {
            while (c[i] == c[j])
            {
                j++;
            }
            i++;
            c[i] = c[j];
        }

        else
        {

            i++;
            j++;
        }
    }
    cout << c;

    return 0;
}