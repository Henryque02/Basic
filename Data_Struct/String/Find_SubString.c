#include<stdio.h>
#include<string.h>

int main(){
    /*Como encontrar uma sub string*/

    char vet[50] = {"Bom dia simpatia\n"};
    char str[] = ("dia");
    char *ponteiro;
    ponteiro = strstr(vet,str);
    if (ponteiro == NULL)
    {
        printf("Ponteiro nulo!\n");
    }
    printf("%c\n", *ponteiro);

    return 0;
}