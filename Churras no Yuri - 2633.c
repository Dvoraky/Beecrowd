#include <stdio.h>

typedef struct
{
    char nome[25];
    int validade;

} Carnes;


int main()
 {
    int numCarnes, i, j, k;

    while(scanf("%d", &numCarnes) != EOF)
    {
        Carnes carne[numCarnes];
        Carnes aux;

        for(i = 0; i < numCarnes; i++)
        {
            scanf("%s %d", carne[i].nome, &carne[i].validade);
        }

        for(j = 0; j < numCarnes; j++)
        {
            for(k = 0; k < numCarnes; k++)
            {
                if(carne[j].validade < carne[k].validade)
                {
                    aux = carne[k];
                    carne[k] = carne[j];
                    carne[j] = aux;
                }
            }
        }

        for(j = 0; j < numCarnes; j++)
        {
            printf("%s", carne[j].nome);
            if(j != numCarnes - 1)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}