/*Como descobrir se uma palavra é palíndroma*/

#include<stdio.h>
#include<string.h>

int main()
{
    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%s20[^\n]", palavra);
    int tamanho = strlen(palavra), inverso = tamanho;
    for (int i = 0; i < tamanho; i++)
    {
        if (palavra[i] != palavra[inverso - 1])
        {
            printf("A palavra nao e palindroma!");
        }
        tamanho --;
    }
    printf("A palavra %s e palindroma.", palavra);
    return 0;
}

