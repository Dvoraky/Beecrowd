#include <bits/stdc++.h>

using namespace std;

int main() {

    int N, K;
    scanf("%d", &N);
    vector<int> V(N);
    vector<int> :: iterator it;

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
    }

    scanf("%d", &K);

    for(int i = 0; i < N; i++)
    {
        int x = K - V[i];
        it = lower_bound(V.begin() + i + 1, V.end(), x);
        if(it != V.end() && *it == x)
        {
            printf("%d %d\n", V[i], *it);
        }
    }

    return 0;
}