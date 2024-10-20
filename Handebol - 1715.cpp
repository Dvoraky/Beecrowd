#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, x, contador = 0;
    bool flag = true;
    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        flag = true;
        for(int j = 0; j < M; j++)
        {
            cin >> x;
            if(x < 1) flag = false;
        }
        
        if(flag) contador++;
    }

    cout << contador << endl;
    return 0;
}