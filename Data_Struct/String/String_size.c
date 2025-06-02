#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palavras[55] = {"Hi. let's learn to program"};
    printf("Tamanho: %d\n", strlen(palavras));

    int i =0;
    while (palavras[i] != '\0') // \0 identifica o fim da string
    {
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }

    return 0;
}