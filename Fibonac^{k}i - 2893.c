#include<stdio.h>
#include<stdlib.h>

typedef struct lista
{
    int info;
    struct lista *prox;
    struct lista *ant;
} Lista;

typedef struct c
{
    Lista *ini;
	Lista *fim;
} C;

C* inserir(C *F, int x)
{
    Lista *pt = (Lista*) malloc(sizeof(Lista));
    pt -> info = x;
    if(F -> ini == NULL)
    {
        F -> ini = pt;
        F -> fim = pt;
        return F;
    }
    
    else
    {
        pt -> prox = F -> ini;
        F -> ini -> ant = pt;
        F -> ini = pt;
        return F;
    }
}

int remover(C *F)
{
    Lista *pt = F -> fim;
	int x = pt -> info;
	if(pt -> ant == NULL)
    {
		F -> ini = NULL;
	}
	
	F -> fim = pt -> ant;
	pt -> ant -> prox = NULL;
	free(pt);
    return x;
}

C* inicializar()
{
    C* pt = (C*) malloc(sizeof(C));
    pt -> ini = pt -> fim = NULL;
    return pt;
}

void liberar(C* F)
{
    Lista *pt = F -> ini;
    while(pt != NULL)
    {
        Lista *t = pt;
        pt = t -> prox;
        free(t);
    }
    
    F -> ini = NULL;
    F -> fim = NULL;
}

int main()
{
	int T, k, N, soma, x;

	C* F = inicializar();

	scanf("%d", &T);

	for(int i = 0; i < T; i++)
    {
		scanf("%d %d", &k, &N);
		for(int j = 0; j < k; j++)
		{
			F = inserir(F, j);
        }

		if(N <= k)
		{
			Lista *pt = F -> fim;

			for(int j = 1; j < N; j++)
            {
				pt = pt -> ant;
			}

			printf("%d\n", pt -> info);
		}

		else
        {
			soma = 0;
			Lista* pt = F -> ini;
			while(pt != NULL)
            {
                soma = soma + pt -> info;
                pt = pt -> prox;
            }

			for(int j = k; j < N; j++)
			{
			    x = remover(F);
				F = inserir(F, soma);
				soma = ((soma % 1000007) + (soma % 1000007) + 1000007) % 1000007;
				soma = (soma - x + 1000007) % 1000007;
			}

			printf("%d\n", F -> ini -> info);
		}

		liberar(F);
	}

	return 0;
}