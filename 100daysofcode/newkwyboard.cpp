#include <bits/stdc++.h>
#include<ctype.h>
using namespace std;



string receivedText(string s) {
  int i = 0;
  int j = 0;
  int l;
  bool k = 0;
  bool numkey = 0;
  string str;
  while (s[i] != '\0')
  {
    if (s[i] == '<')
    {
      k = 1;
      l = str.lenght();

    }
    else if (s[i] == '>')
    {
      k = 0;
    }
    else if (s[i] == '*')
    {
      str.erase(str.begin() + (j - 1);
    }
    else if (s[i] == '#')
    {
      numkey = 1;
    }
    else
    {
      if (k == 0)
      {
        if (numkey == 1)
        {
          if (isdigit(s[i]))
          {
            i++;
            continue;
          }
        }


        str[j] = str[i];
        j++;

      }
      else
      {
        if (numkey == 1)
        {
          if (isdigit(s[i]))
          {
            i++;
            continue;
          }
        }


        str = insertat(str, s[i], j);

        //for(int w=0;w<;w++)
      }

    }
    i++;
  }


}

int main()
{
  ofstream fout(getenv("OUTPUT_PATH"));

  string S;
  getline(cin, S);

  string result = receivedText(S);

  fout << result << "\n";

  fout.close();

  return 0;
}
