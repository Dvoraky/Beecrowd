#include <bits/stdc++.h>

using namespace std;

int main()
{
    int NC, N, x;
    cin >> NC; 
    vector <int> V;

    while(NC != 0)
    {
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> x;
            V.push_back(x);
        }

        sort(V.begin(), V.end());

        for(int i = 0; i < V.size(); i++)
        {
            if(i != 0)
                cout << " ";
            cout << V[i];
        }

        V.clear();
        cout << endl;
        NC--;
    }
        

    return 0;
}