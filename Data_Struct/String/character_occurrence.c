#include<stdio.h>
#include<string.h>

int main()
{
    /*procurando caracter (primeira e ultima ocorrencia)*/

    char test[50] = {"abacate"}; 
    char *letra;
    letra = strchr(test,'a'); // É sensível a maiúscula e minúscula e strrchr pega ultima ocorrencia
    printf("\n%c", *letra);
    printf("\n%c", *(letra+1));

    return 0;
}