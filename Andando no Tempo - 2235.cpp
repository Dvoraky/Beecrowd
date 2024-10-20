#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(A == B || A == C || B == C) printf("S\n");
    else
    {
       if((A + B) == C || (A - B) == C || (C + A) == B || (C - A) == B || (B + C) == A || (B - C) == A)  printf("S\n");
       else printf("N\n");           
    }

    return 0;
}