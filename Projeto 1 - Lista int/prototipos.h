#include <stdlib.h>
#include <stdio.h>

typedef struct lista Lista;

Lista* lst_cria(void);
Lista* lst_insere(Lista* l, int i);
Lista* lst_insere_meio(Lista* l, int i);
Lista* lst_insere_fim(Lista* l, int i);
void lst_imprime(Lista* l);
int lst_vazia(Lista* l);
Lista* busca(Lista* l, int v);
Lista* lst_retira(Lista* l, int v);
void lst_libera(Lista* l);

