#include <stdio.h>

typedef struct pilha
{
    char info;
    struct pilha* prox;
} Pilha;

Pilha* push(Pilha* P, char c)
{
    Pilha* pt = (Pilha*) malloc(sizeof(Pilha));
    pt -> info = c;
    pt -> prox = P;
    return pt;
}

Pilha* pop(Pilha *P)
{
    Pilha* pt;
    if(P == NULL)
        exit(1);
    pt = P;
    P = pt -> prox;
    free(pt);
    return P;
}

Pilha* liberar(Pilha* P)
{
    Pilha* q = P;
    while(q != NULL)
    {
        Pilha* t = q -> prox;
        free(q);
        q = t;
    }
    return NULL;
}

int main()
{
    Pilha* P = NULL;
    int cont = 0;
    char x;

    while(scanf("%c", &x) != EOF)
    {
        if(x == '\n')
        {
            printf("%d\n", cont);
            P = liberar(P);
            cont = 0;
        }

        if(P == NULL)
            P = push(P, x);

        else if((x == 'C' && P -> info == 'F') || (x == 'F' && P -> info == 'C'))
        {
            P = pop(P);
            cont++;
        }
        else if((x == 'S' && P -> info == 'B') || (x == 'B' && P -> info == 'S'))
        {
            P = pop(P);
            cont++;
        }
        else
        {
            P = push(P, x);
        }

    }

    return 0;
}