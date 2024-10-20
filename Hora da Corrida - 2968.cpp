#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double V, N;

    cin >> V >> N;

    for(int i = 10; i <= 80; i += 10)
    {
        cout << int((V * N * i / 100.0) + 0.9) << " ";
    }

    cout << int(((V * N * 90 / 100.0)) + 0.9) << endl;

    return 0;
}