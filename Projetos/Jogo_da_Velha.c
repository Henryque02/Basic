#include<stdio.h>

int controle;

void imprimir_matriz()
{
    char matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            printf("%c", matriz[i][j]);
        }
    }
    
}

int verificador(int controle)
{
    while (controle != 1 && controle != 2)
    {
        printf("Opcao invalida! Digite uma opcao valida: ");
        scanf("%d", &controle);
    }
    return 0;
}

int main()
{
    printf("Bem vindo ao meu jogo da velha!\n\nQuer Jogar?\n1)Sim\n2)Nao\n\n");
    scanf("%d", &controle);
    verificador(controle);
    if (controle == 2)
    {
        printf("\nVolte mais tarde (:");
    }
    
    printf("O jogador 1 e o X e o jogador 2 e o O\n\nInforme a posição que deseja jogar: \n");
    scanf("%")

    return 0;
}

