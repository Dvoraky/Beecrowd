#include<stdio.h>
#include<stdlib.h>

typedef struct lista
{
	int chegada;
	int saida;
	struct lista *prox;
} Lista;

typedef struct pilha
{
    Lista* topo;
} Pilha;

Pilha* pilha_cria(void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p -> topo = NULL;
    return p;
}


void pilha_push(Pilha* p, int chegada, int saida)
{
	Lista* n = (Lista*) malloc(sizeof(Lista));
	n -> chegada = chegada;
	n -> saida = saida;
	n -> prox = p -> topo;
	p -> topo = n;
}

Lista pilha_pop(Pilha* p)
{
	Lista n;
	Lista *t = (Lista*) malloc(sizeof(Lista));

    if(p -> topo == NULL)
    {
        exit(1);
    }

	t = p -> topo;
	n.chegada = t -> chegada;
	n.saida= t -> saida;

	if(t -> prox != NULL)
    {
		p -> topo = t -> prox;
	}

	else
    {
        p -> topo = NULL;
    }

	free(t);
	return n;
}


void libera_pilha(Pilha* p)
{
	Lista *q = (Lista*) malloc(sizeof(Lista));
    q = p -> topo;
	while(q != NULL)
    {
		Lista *t = q;
		q = q -> prox;
		free(t);
	}
	p -> topo = NULL;
}

int main()
{

	Pilha* L = pilha_cria();

	int N, K, chegada, saida, flag;

	while(1)
    {
		scanf("%d %d\n",&N, &K);
		if(N == 0 && K==0)
        {
            break;
        }

		Pilha* p = pilha_cria();
		flag = 1;

		for(int i = 0; i < N; i++)
        {
			scanf("%d %d", &chegada, &saida);
            if(flag)
            {
                if(p -> topo == NULL && K > 0)
                {
                    pilha_push(p, chegada, saida);
                    K--;
                }

                else
                {
                    while(chegada >= p -> topo -> saida)
                    {
                        pilha_pop(p);
                        K++;
                        if(p -> topo == NULL)
                        {
                            break;
                        }
                    }

                    if(K <= 0)
                    {
                        flag = 0;
                    }

                    else
                    {
                        pilha_push(p, chegada, saida);
                        K--;

                        if(p -> topo -> prox != NULL)
                        {
                            if(p -> topo -> chegada > p -> topo -> prox -> chegada && p -> topo -> saida < p -> topo -> prox -> saida)
                            {
                                continue;
                            }

                            else
                            {
                                flag = 0;
                            }
                        }
                    }
                }
            }
        }

        if(flag == 0)
        {
            printf("Nao\n");
        }

		else if(flag == 1)
        {
            printf("Sim\n");
        }

		libera_pilha(p);

    }

    return 0;
}
