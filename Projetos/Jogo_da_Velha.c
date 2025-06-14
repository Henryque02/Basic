/*
    DOCUMENTAÇÃO

    Objetivo: fazer um jogo da velha
*/
#include<stdio.h>

int main()
{
    int Quero_jogar;
    printf("Bem vindo ao meu jogo da velha!\n\nQuer jogar uma partida agora?\n");
    scanf("%d", &Quero_jogar);
    while (Quero_jogar != 1 || Quero_jogar != 2)
    {
        printf("Digite uma opcao valida: ");
        scanf("%d", &Quero_jogar);
    }
    
    return 0;
}

