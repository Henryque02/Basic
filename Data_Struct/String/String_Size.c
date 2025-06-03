#include<stdio.h>
#include<string.h>

int main()
{
    /*Descobrir tamanho da string*/

    char palavras[55] = {"Hi. let's learn to program"};
    printf("\nTamanho: %d\n\n", strlen(palavras));

    int i =0;
    while (palavras[i] != '\0') // \0 identifica o fim da string
    {
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }

    return 0;
}