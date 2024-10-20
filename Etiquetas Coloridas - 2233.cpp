#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int R, G, B;
    long long maxR = 1, maxG, maxB;
    scanf("%x", &R);
    scanf("%x", &G);
    scanf("%x", &B);

    maxG = pow(R / G, 2);
    maxB = pow(G / B, 2) * maxG;

    printf("%llx\n", maxR + maxG + maxB);

    return 0;
}