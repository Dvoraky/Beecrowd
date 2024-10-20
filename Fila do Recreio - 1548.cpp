#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int N, M, P, cont;
    vector <int> V, Vetor;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> M;
        cont = 0;
        for(int j = 0; j < M; j++)
        {
            cin >> P;
            V.push_back(P);
            Vetor.push_back(P);
        }

        sort(Vetor.rbegin(), Vetor.rend());

        for(int j = 0; j < M; j++)
        {
            if(Vetor[j] == V[j])
            {
                cont++;
            }
        }

        cout << cont << endl;
        V.clear();
        Vetor.clear();
    }


    return 0;
}