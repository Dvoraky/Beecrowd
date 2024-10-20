#include <stdio.h>
 
int main() 
{
    int N1, N2;
    float V1, V2, D1, D2;
    scanf("%d %f %f", &N1, &D1, &V1);
    scanf("%d %f %f", &N2, &D2, &V2);
   
    if(D1 / (V1 / 3.6) < D2 / (V2 / 3.6))
    {
        printf("%d\n", N1);
    }
    if((D1 / (V1 / 3.6)) > (D2 / (V2 / 3.6)))
    {
        printf("%d\n", N2);
    }
 
    return 0;
}