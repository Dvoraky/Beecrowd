#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector < pair<int, int> > V;
    int A, B, N, pos, c;

    while(cin >> N)
    {
        V.clear();
        c = 0;

        for(int i = 0; i < N; i++)
        {
            cin >> A >> B;
            V.push_back(make_pair(B, A));
        }

        sort(V.begin(), V.end());
        pos = V[0].first;
        c++;

        for(int i = 0; i < V.size(); i++)
        {
           if(V[i].second > pos)
           {
               pos = V[i].first;
               c++;
           }
        }

        cout << c << endl;
    }


    return 0;
}