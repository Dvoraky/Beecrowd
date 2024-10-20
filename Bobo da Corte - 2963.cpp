#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin >> N;
    int carlos = 0, atual=0;
    bool ganhou = true;
    cin >> carlos;
    for(int i = 0; i < N-1; i++){
        cin >> atual;
        if(atual > carlos) 
        {
            ganhou = false;
            break;
        }
    }
    cout << (ganhou ? "S" : "N") << endl;
    return 0;
}