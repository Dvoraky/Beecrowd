#include <stdio.h>

typedef struct lista
{
    int info;
    struct lista *prox;
} Lista;

typedef struct fila
{
    Lista *ini;
    Lista *fim;
} Fila;

Fila* inicializar(Fila* F)
{
    F = (Fila*) malloc(sizeof(Fila));
    F ->ini =  F -> fim = NULL;
    return F;
}

Fila* push(Fila* f, int x)
{
    Lista *pt = (Lista*) malloc(sizeof(Lista));
    pt -> info = x;
    pt -> prox = NULL;
    if(f -> fim != NULL)
        f -> fim -> prox = pt;
    else
        f -> ini = pt;

    f -> fim = pt;
    return f;
}

Fila* pop(Fila *f)
{
    if(f->ini == NULL)
    {
        exit(1);
    }

    Lista* pt = f -> ini;
    f -> ini = pt -> prox;
    if(f->ini == NULL)
        f->fim = NULL;
    free(pt);
    return f;
}

int size(Fila* F)
{
    int cont = 0;
    Lista* pt = NULL;
    pt = F -> ini;
    while(pt != NULL)
    {
        cont++;
        pt = pt -> prox;
    }

    return cont;
}

int main()
{
    Fila *F;
    F = inicializar(F);

    int x, Size, i = 0;
    int V[55];

    while(1)
    {
        scanf("%d", &x);

        if(x == 0)
            break;

        for(int j = 1; j <= x; j++)
        {
            F = push(F, j);
        }

        Size = size(F);
        while(1)
        {
            if(Size < 2)
                break;

            V[i] = F -> ini -> info;
            F = pop(F);
            F = push(F, F -> ini -> info);
            F = pop(F);
            i++;
            Size = size(F);
        }

        printf("Discarded cards:");
        for(int j = 0; j < i; j++)
        {
            if((j + 1) != i)
                printf(" %d,", V[j]);
            else
                printf(" %d\n", V[j]);
        }

        printf("Remaining card: %d\n", F -> ini -> info);

        i = 0;
        F = pop(F);

    }

    return 0;
}