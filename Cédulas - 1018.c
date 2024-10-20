#include <stdio.h>
 
int main() 
{
    int N, cem, cinquenta, vinte, dez, cinco, dois, um, sobra;
    scanf("%d", &N);
    cem = N / 100;
    sobra = N %100;

    cinquenta = sobra / 50;
    sobra = sobra % 50;

    vinte = sobra / 20;
    sobra = sobra % 20;

    dez = sobra / 10;
    sobra = sobra % 10;

    cinco = sobra / 5;
    sobra = sobra % 5;

    dois = sobra / 2;
    sobra = sobra % 2;

    um = sobra / 1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",N, cem, cinquenta, vinte, dez, cinco, dois, um);


    return 0;
}