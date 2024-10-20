#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    char info;
    struct lista *prox;
} Lista;

typedef struct c
{
    Lista *ini;
    Lista *it;
    Lista *fim;
} C;

C* inicializar(C* c)
{
    c = (C*) malloc(sizeof(C));
    c -> ini =  c -> fim = c -> it = NULL;
    return c;
}

C* inserirINI(C* L, char x)
{
    Lista* pt = (Lista*) malloc(sizeof(Lista));
    pt -> info = x;
    if(L -> ini == NULL)
    {
        L -> ini = pt;
        L -> it = pt;
        L -> fim = pt;
        return L;
    }

    pt -> prox = L -> ini;

    L -> ini = pt;
    L -> it = pt;

    return L;
}

C* inserirIT(C* L, char x)
{
    Lista* pt = (Lista*) malloc(sizeof(Lista));
    pt -> info = x;

	if(L -> ini == NULL)
    {
		L -> ini = pt;
		L -> it = pt;
		L -> fim = pt;

		return L;
	}

	if(L -> it -> prox == NULL){
		L -> fim = pt;
	}

	pt -> prox = L -> it -> prox;
	L -> it -> prox = pt;
	L -> it = pt;

	return L;
}

C* inserirFIM(C* L, char x)
{
    Lista* pt = (Lista*) malloc(sizeof(Lista));

    pt -> info = x;
	pt -> prox = NULL;

	if(L -> ini == NULL)
    {
		L -> ini = pt;
		L -> it = pt;
		L -> fim = pt;

		return L;
	}

    L -> it = pt;
	L -> fim -> prox = pt;
	L -> fim = pt;

	return L;
}

void liberar(C* L)
{
    Lista *pt = L -> ini;
	while(pt != NULL)
    {
		Lista *t = pt;
		pt = t -> prox;
		free(t);
	}

	L -> ini = NULL;
	L -> it = NULL;
	L -> fim = NULL;
}

void imprimir(Lista* L)
{
    Lista* pt = L;
    while(pt != NULL)
    {
        printf("%c", pt -> info);
        pt = pt -> prox;
    }
    printf("\n");
}


int main()
{
    C* c = inicializar(c);
    char x;
    int flag = 1;

    while(scanf("%c", &x) != EOF)
    {
        if(x == '\n')
        {
            imprimir(c -> ini);
            flag = 1;
            liberar(c);
        }

        else if(x == '[')
        {
            flag = 0;
        }

        else if(x == ']')
        {
            flag = 2;
        }

        else
        {
            switch(flag)
            {
                case 0:
                    inserirINI(c, x);
                    break;
                case 1:
                    inserirIT(c, x);
                    break;
                case 2:
                    inserirFIM(c, x);
                    break;
            }
            flag = 1;

        }
    }

    return 0;
}