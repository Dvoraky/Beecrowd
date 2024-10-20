#include <stdio.h>

long long V, N, Total, i;

void calcularPorcentagem(long long Total, long long i)
{
    long long resto = (Total * i) % 100;
    long long z = (Total * i) / 100;

    if(resto != 0)
    {
         if(i == 90)
            printf("%ld\n", (z + 1));
        else
            printf("%ld ", (z + 1));
    }
    else
    {
        if(i == 90)
            printf("%ld\n", z);
        else
            printf("%ld ", z);

    }

}

int main()
 {

    scanf("%ld %ld", &V, &N);
    if(V > 0)
        Total = V * N;
    else
        Total = N;

    for(i = 10; i <= 90; i = i + 10)
    {
        calcularPorcentagem(Total, i);
    }

    return 0;
}