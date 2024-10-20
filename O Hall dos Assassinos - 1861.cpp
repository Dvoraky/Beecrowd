#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> M;
    string x, y;

    while(cin >> x >> y)
    {
        if(M[x] != -1)
        {
            M[x] += 1;
        }
        M[y] = -1;
    }

    map <string, int> :: iterator it;
    cout << "HALL OF MURDERERS\n";

    for(it = M.begin(); it != M.end(); ++it)
    {
      if(it -> second > 0)
      {
          cout << it -> first << " " << it -> second << '\n';
      }
    }

    return 0;
}