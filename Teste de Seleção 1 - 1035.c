#include <stdio.h>
 
int main() 
{ 
    int A, B, C, D, r;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    r = A % 2;

    if((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (r == 0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}