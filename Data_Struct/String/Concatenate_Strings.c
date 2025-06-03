#include<stdio.h>
#include<string.h>

int main()
{
    /*concatenar strings*/
    
    char palavras1[50] = {"Oi."};
    char palavras2[50] = {"Bom dia."};
    
    strcat(palavras1, palavras2); //primeira str é a que vou concatenar e a segunda é o acrescimo que faço na primeiro logo no final
    printf("\n\t%s\n", palavras1);

    return 0;
}