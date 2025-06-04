/*
Como descobrir se uma frase é palíndroma
luz azul
anotaram a data da maratona
roma me tem amor
a grama é amarga
a mãe te ama
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char frase[50];
    int tamanho = 0, palindroma = 1;

    printf("Digite uma frase: ");
    scanf("%49s[^\n]", frase);
    tamanho = strlen(frase);
    for (int i = 0; i < tamanho/2; i++)
    {
        if (frase[i] != frase[tamanho - 1 - i])
        {
            palindroma = 0;
            break;
        }
    }
    if (palindroma)
    {
        printf("A frase e palindroma");
    }
    else
        printf("A frase nao e palindroma!");

    return 0;
}

