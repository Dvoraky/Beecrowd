#include <stdio.h>

typedef struct pilha
{
    char c;
    struct pilha* prox;
}Pilha;

Pilha* inserir(Pilha* L, char c)
{
    Pilha* pt = NULL;
    pt = (Pilha*) malloc(sizeof(Pilha));
    pt -> c = c;
    pt -> prox = L;
    return pt;
}

Pilha* remover(Pilha* L)
{
    Pilha* pt = L;
    L = pt -> prox;
    free(pt);
    return L;
}

int main()
{
    Pilha* L = NULL;
    int N, cont = 0, D;
    char V[1002];

    scanf("%d", &N);

    while(N--)
    {
        D = 0;
        scanf("%s", V);
        while(L != NULL)
        {
           L = remover(L);
        }


        for(int i = 0; i < strlen(V); i++)
        {
            if(V[i] == '\n')
                break;
            if(V[i] == '<')
            {
                L = inserir(L, '<');
            }

            else if(L != NULL && V[i] == '>')
            {
               L = remover(L);
               D++;
            }
        }
        printf("%d\n", D);
    }

    return 0;
}