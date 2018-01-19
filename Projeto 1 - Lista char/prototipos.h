#include <stdlib.h>
#include <stdio.h>

typedef struct lista Lista;

Lista* lst_cria(void);
Lista* lst_insere(Lista* l, char i);
Lista* lst_insere_meio(Lista* l, char i);
//Lista* lst_insere_fim(Lista* l, int i); TENTAR REFAZER (NÃO CONSEGUI) PERGUNTAR PRA PROF!!!
void lst_imprime(Lista* l);
int lst_vazia(Lista* l);
Lista* busca(Lista* l, char v);
Lista* lst_retira(Lista* l, char v);
void lst_libera(Lista* l);

