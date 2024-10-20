#include <stdio.h>
#include <string.h>

void main ()
{
    int N, L, C, i, aux, caracteres;
    char palavras[75];

    while(scanf("%d %d %d", &N, &L, &C) != EOF)
    {
        int linhas = 1, paginas = 1;
        scanf("%s", palavras);
        caracteres = strlen(palavras);
        N--;

        for(i = 0; i < N; ++i)
        {
            scanf("%s", palavras);
            aux = strlen(palavras);

            if((caracteres + (aux + 1)) <= C)
            {
                caracteres = caracteres + (aux + 1);
            }
            else
            {
                linhas++;
                if(linhas > L)
                {
                    paginas++;
                    linhas = 1;
                }

                caracteres = aux;
            }
        }

        printf("%d\n", paginas);

    }
}