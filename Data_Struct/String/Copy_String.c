#include<stdio.h>
#include<string.h>

int main()
{
    /*Copy string*/

    char palavras1[50] = {"Oi."};
    char palavras2[50] = {"Bom dia."};

    strcpy(palavras1, palavras2); //primeiro é o destino e o segundo o copiado
    printf("\npalavras1: %s\npalavras2: %s\n", palavras1, palavras2);

    return 0;
}