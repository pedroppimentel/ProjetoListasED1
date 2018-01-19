#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int main(void)
{
    Lista *l;
    /* declara uma lista não iniciada
    */
    l = lst_cria();
    /* inicia lista vazia
    */
    l = lst_insere(l, 'O');
    /* insere na lista o elemento 'O'
    */
    l = lst_insere(l, 'l');
    /* insere na lista o elemento 'L'
    */
    l = lst_insere(l, 'A');
    /* insere na lista o elemento 'A'
    */
    l = lst_insere(l, 'O');
    /* insere na lista o elemento 'O'
    */
    lst_imprime(l);
    /* imprimirá: O / A / L / O
    */
    printf("\n------------------------------\n");
    l = lst_retira(l, 'O');
    /* imprimirá: A / L / O
    */
    lst_imprime(l);
    printf("\n------------------------------\n");
    l = lst_retira(l, 'l');
    lst_imprime(l);
    /* imprimirá: A / O
    */
    printf("\n------------------------------\n");
    lst_insere_meio(l, 'V'); //vai inserir o 'V' entre o 'A' e 'O'..
    lst_imprime(l);
    /*imprimirá: A / V / O
    */
    printf("\n------------------------------\n");
    /*lst_insere_fim(l, 69);//insere o valor 69 no fim da lista (depois do 23)...
    lst_imprime(l);
    /*imprimirá: 56 28 23 69
    */
    
    
    lst_libera(l);
    return 0;
}


