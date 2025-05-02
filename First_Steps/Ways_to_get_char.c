#include<stdio.h>
#include<stdlib.h>

int main()
{
    char letra1;
    printf("Digite um caracter: ");
    letra1 = getc(stdin); //Pode ler de outras fontes, passar isso por parâmetros (stdin é entrada padrão = teclado)
    printf("Caracter lido: %c\n", letra1);

    char letra2;
    printf("Digite um caracter: ");
    letra2 = fgetc(stdin); // f de file
    printf("Caracter lido: %c\n", letra2);

    char letra3;
    printf("Digite uma letra: ");
    letra3 = getchar();
    printf("Caracter lido: %c\n", letra3);

    
    return 0;
}