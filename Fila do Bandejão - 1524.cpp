#include <bits/stdc++.h>

using namespace std;

int main( )
{
    int N, K, soma, x;
    vector <int> V;
    vector <int> V2;

    while(cin >> N >> K) 
    {
        soma = 0;
        V.clear();
        V2.clear();

        V.push_back(0);
        V2.push_back(0);

        for(int i = 1; i < N; i++) 
        {
            cin >> x;
            V2.push_back(x);
            V.push_back(V2[i] - V2[i - 1]);
        }

        sort(V.begin(), V.end(), greater <int>());

        for(int i = K - 1; i < N; i++)
        {
            soma += V[i];
        }
            
        cout << soma << endl;
        
    }

    return 0;
}