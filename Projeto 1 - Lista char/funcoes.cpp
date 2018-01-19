#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "prototipos.h"

struct lista
{
    char info;
    struct lista* prox;
};

/* fun��o de cria��o: retorna uma lista vazia */
Lista* lst_cria(void)
{
    return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* lst_insere(Lista* l, char i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

Lista* lst_insere_meio(Lista* l, char i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l->prox;
	l->prox = novo;
	
	return novo;
}

Lista* lst_insere_fim(Lista* l, char i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Lista* p;//ponteiro que aponta para a lista

	for (p = l; p != NULL; p = p->prox)
		{			
			if(p->prox == NULL){	
				novo->info = i;
				novo->prox = NULL;
				p->prox = novo;
			}
		}

		
	return novo;	
}

/* fun��o imprime: imprime valores dos elementos */
void lst_imprime(Lista *l)
{
    Lista* p;
       
	printf ("Info: \n");
    for (p = l; p != NULL; p = p->prox)
    	{
			printf("%c\n", p->info);
        		
        }
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int lst_vazia(Lista* l)
{
    return (l == NULL);
}

/* fun��o busca: busca um elemento na lista */
Lista* busca(Lista* l, char v)
{
    Lista* p;
    for (p=l; p!=NULL; p = p->prox)
    {
        if (p->info == v)
            return p;
    }
    /* n�o achou o elemento */
    return NULL;
}

/* fun��o retira: retira elemento da lista */
Lista* lst_retira(Lista* l, char v)
{
// ponteiro para elemento anterior
    Lista* ant = NULL;
    Lista* p = l;
    /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        /* n�o achou: retorna lista original*/
        return l;
        /* retira elemento */
        if (ant == NULL)
        {
            /* retira elemento do inicio */
            l = p->prox;
        }
        else   /* retira elemento do meio da lista */
        {
            ant->prox = p->prox;
        }
    free(p);
    return l;
}

void lst_libera(Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}
