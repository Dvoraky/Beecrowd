#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, x, j;
    vector <int> V;

    cin >> N;
    cin >> K;

    for(int i = 0; i < N; i++)
    {
        cin >> x;
        V.push_back(x);
    }

    sort(V.begin(), V.end(), greater<int>());

    for(j = K; V[j] == V[j - 1]; j++);
    
    cout << j << endl;

    return 0;
}