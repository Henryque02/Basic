#include<stdio.h>

int main(){
    char palavras[50] = {"Hi. let's learn to program"};
    
    printf("Digite seu nome: ");

    //scanf("%10[^\n]", palavras); [^\n] faz o scanf ler ate que o enter seja digitado e 10 ajusta o tamnho do vetor
    
    fgets(palavras, 50, stdin); //ultimo caracter não aparece
    printf("\n%s", palavras);
    return 0;
}