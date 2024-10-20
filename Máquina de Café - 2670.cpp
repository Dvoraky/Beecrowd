#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A1, A2, A3;
    cin >> A1;
    cin >> A2;
    cin >> A3;

    int p = (2 * A2) + (4 * A3);
    int s = (2 * A1) + (2 * A3);
    int t = (4 * A1) + (2 * A2);

    cout << min({p, s, t}) << "\n";


    return 0;
}