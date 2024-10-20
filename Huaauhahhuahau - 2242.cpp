#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector <char> V;
   string x;
   cin >> x;

   for(int i = 0; i < x.length(); i++)
   {        
        if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
        {
            V.push_back(x[i]);
        }
   }
   
    int j = V.size() - 1;

    for(int i = 0; i < V.size(); i++)
    {
        if(V[i] != V[j])
        {
            cout << "N\n";
            return 0;
        }
        j--;
    }

   cout << "S\n";
   return 0;
}