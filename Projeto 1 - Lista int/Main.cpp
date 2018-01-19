#include<stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int main(void)
{
    Lista *l;
    /* declara uma lista não iniciada
    */
    l = lst_cria();
    /* inicia lista vazia
    */
    l = lst_insere(l, 23);
    /* insere na lista o elemento 23
    */
    l = lst_insere(l, 45);
    /* insere na lista o elemento 45
    */
    l = lst_insere(l, 56);
    /* insere na lista o elemento 56
    */
    l = lst_insere(l, 78);
    /* insere na lista o elemento 78
    */
    lst_imprime(l);
    /* imprimirá: 78 56 45 23
    */
    printf("\n------------------------------\n");
    l = lst_retira(l, 78);
    /* imprimirá: 56 45 23
    */
    lst_imprime(l);
    printf("\n------------------------------\n");
    l = lst_retira(l, 45);
    lst_imprime(l);
    /* imprimirá: 56 23
    */
    printf("\n------------------------------\n");
    lst_insere_meio(l, 28); //vai inserir o 28 entre o 56 e 23..
    lst_imprime(l);
    /*imprimirá: 56 28 23
    */
    printf("\n------------------------------\n");
    /*lst_insere_fim(l, 69);//insere o valor 69 no fim da lista (depois do 23)...
    lst_imprime(l);
    /*imprimirá: 56 28 23 69
    */
    
    
    lst_libera(l);
    return 0;
}


