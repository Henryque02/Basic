#include<stdio.h>
#include<string.h>

int main()
{
    /* Comparar strings:
    
    0 -> as strings são iguais
    1 -> str1 for maior q st2
    -1 -> str1 for menor q str2*/

    char palavras1[50] = {"Oi."};
    char palavras2[50] = {"Bom dia."};
    
    printf("\n\nResultado: %d\n\n", strcmp(palavras1, palavras2));

    return 0;
}