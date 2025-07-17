/*
    DOCUMENTAÇÃO

    Objetivo: fazer um jogo da velha
*/

#include<stdio.h>

void imprimir_Matriz(int matriz[3][3])
{
    for (size_t i = 0; i < count; i++)
    {
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
    
}

int main()
{
    int jogar = 0, matriz[3][3];
    printf("\tVamos jogar uma partida?\n\n1- Sim\n2- Nao\n\nDigite o numero da opcao: ");
    scanf(" %d", &jogar);
    while (jogar != 1 && jogar != 2)
    {
        printf("Opcao invalida! Digite uma opcao valida: ");
        scanf(" %d", &jogar);
    }
    if (jogar == 2)
    {
        printf("\nTudo bem! Jogamos outra hora (;");
        return 0;
    }
    printf("\nJogador 1 sera o X e o jogador 2 a O\n\n");
    
    return 0;
}

