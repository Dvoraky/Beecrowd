#include <stdio.h>

int Coral(int soma, int N, int coral[])
{
    if(soma % N != 0)
    {
        return -1;
    }

    int maior = 0;
    soma = soma / N;

    for(int i = 0; i < N; i++)
    {
        if(coral[i] > soma)
        {
            maior = maior + (coral[i] - soma);
        }
    }

    return (maior + 1);
}

int main()
{
    int N, soma, ct;

    while(scanf("%d", &N) != EOF)
    {
        int coral[N];
        soma = 0;

        for(ct = 0; ct < N; ct++)
        {
            scanf("%d", &coral[ct]);
            soma = soma + coral[ct];
        }

        printf("%d\n", Coral(soma, N, coral));
    }

    return 0;
}