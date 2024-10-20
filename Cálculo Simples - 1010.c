#include <stdio.h>
 
int main() 
{
    int A, B, C, D;
    float y, z, total;

    scanf("%d %d %f", &A, &B, &y);
    scanf("%d %d %f", &C, &D, &z);

    total = (B * y) + (D * z);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}