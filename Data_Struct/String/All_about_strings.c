#include<stdio.h>
#include<string.h>

int main(){

    /* Comparar strings:

    0 -> as strings são iguais
    1 -> str1 for maior q st2
    -1 -> str1 for menor q str2*/

    char palavras1[50] = {"Oi."};
    char palavras2[50] = {"Bom dia."};
    printf("\n\nResultado: %d\n\n", strcmp(palavras1, palavras2));

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /*concatenar strings*/

    strcat(palavras1, palavras2); //primeira str é a que vou concatenar e a segunda é o acrescimo que faço na primeiro logo no final
    printf("\n\t%s\n", palavras1);

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    /*Descobrir tamanho da string*/

    char palavras[55] = {"Hi. let's learn to program"};
    printf("\nTamanho: %d\n\n", strlen(palavras));

    int i =0;
    while (palavras[i] != '\0') // \0 identifica o fim da string
    {
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /*ways to get a char*/

    printf("\nDigite seu nome: ");

    //scanf("%10[^\n]", palavras); [^\n] faz o scanf ler ate que o enter seja digitado e 10 ajusta o tamnho do vetor
    fgets(palavras, 50, stdin); //ultimo caracter não aparece
    printf("\n%s", palavras);

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /*Copy string*/

    strcpy(palavras, palavras1); //primeiro é o destino e o segundo o copiado
    printf("\npalavras1: %s\npalavras: %s\n", palavras1, palavras);

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /*procurando caracter (primeira e ultima ocorrencia)*/

    char test[50] = {"abacate"}; 
    char *letra;
    letra = strchr(test,'a'); // É sensível a maiúscula e minúscula e strrchr pega ultima ocorrencia
    printf("\n%c", *letra);
    printf("\n%c", *(letra+1));

    return 0;
}