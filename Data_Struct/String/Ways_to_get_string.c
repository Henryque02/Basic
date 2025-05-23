#include<stdio.h>

int main(){
    char palavras[] = {"Hi. let's learn to program"};
    printf("Digite seu nome: ");
    scanf("%10[^\n]", palavras); //[^\n] faz o scanf ler ate que o enter seja digitado e 10 ajusta o tamnho do vetor
    printf("%s", palavras);
    return 0;
} 