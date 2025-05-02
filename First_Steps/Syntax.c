// Comentario de uma linha

/*Bloco 
de 
comentario
*/

#include <stdio.h> // Biblioteca padrão de entrada e saída
#include <stdlib.h> // Biblioteca padrão de funções utilitárias

int main() 
{   // Função principal do programa
    int valor; // Declaração de uma variável do tipo inteiro
    valor = 50; // Atribuição de valor à variável
    printf("Digite um valor inteiro: \n"); // Imprime "Digite um valor inteiro" na tela e o \n pula a linha
    scanf("%d", &valor); // Lê um valor inteiro do usuário e armazena na variável 'valor'
    printf("O valor digitado foi: %d\n", valor); // Imprime o valor digitado pelo usuário
    return 0;
}

// printf("%.2f")  Imprime um número real com duas casas decimais
