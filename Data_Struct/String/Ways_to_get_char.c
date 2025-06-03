#include<stdio.h>
#include<string.h>

int main()
{
    /*ways to get a char*/

    char palavras[50];
    printf("\nDigite seu nome: ");

    //scanf("%10[^\n]", palavras); [^\n] faz o scanf ler ate que o enter seja digitado e 10 ajusta o tamnho do vetor
    fgets(palavras, 50, stdin); //ultimo caracter não aparece
    printf("\n%s", palavras);

    return 0;
}