#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prototipos.h"

int main(void)
{
    Lista *l;
    /* declara uma lista n�o iniciada
    */
    l = lst_cria();
    /* inicia lista vazia
    */
    l = lst_insere(l, "Oi");
    /* insere na lista o elemento "O"
    */
    l = lst_insere(l, "Leo");
    /* insere na lista o elemento "L"
    */
    l = lst_insere(l, "Alguma coisa");
    /* insere na lista o elemento "A"
    */
    l = lst_insere(l, "Outro");
    /* insere na lista o elemento "O"
    */
    lst_imprime(l);
    /* imprimir�: O / A / L / O
    */
    printf("\n------------------------------\n");
    l = lst_retira(l, "Outro");
    /* imprimir�: A / L / O
    */
    lst_imprime(l);
    printf("\n------------------------------\n");
    l = lst_retira(l, "Leo");
    lst_imprime(l);
    /* imprimir�: A / O
    */
    printf("\n------------------------------\n");
    lst_insere_meio(l, "Veio"); //vai inserir o "V" entre o "A" e "O"..
    lst_imprime(l);
    /*imprimir�: A / V / O
    */
    printf("\n------------------------------\n");
    /*lst_insere_fim(l, 69);//insere o valor 69 no fim da lista (depois do 23)...
    lst_imprime(l);
    /*imprimir�: 56 28 23 69
    */
    
    
    lst_libera(l);
    return 0;
}



