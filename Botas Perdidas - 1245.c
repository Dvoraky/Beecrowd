#include <stdio.h>

typedef struct
{
    int tamanho;
    char lado;
    int flag;

} Botas;

int main()
 {
    int numBotas, i, j, k, ct = 0;

    while(scanf("%d", &numBotas) != EOF)
    {
        Botas bota[numBotas];
        Botas aux;

        for(i = 0; i < numBotas; i++)
        {
            scanf("%d %c", &bota[i].tamanho, &bota[i].lado);
            bota[i].flag = 0;
        }

        for(j = 0; j < numBotas; j++)
        {
            for(k = 0; k < numBotas; k++)
            {
                if(bota[k].flag == 0 && bota[j].flag == 0 && bota[k].tamanho == bota[j].tamanho && bota[k].lado != bota[j].lado)
                {
                    bota[k].flag = 1;
                    bota[j].flag = 1;
                    ct++;
                }
            }
        }

        printf("%d\n", ct);
        ct = 0;
    }

    return 0;
}