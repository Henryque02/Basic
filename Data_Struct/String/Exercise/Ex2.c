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
    char frase[50], frase_ajustada[50];

    printf("Digite uma frase: ");
    scanf("%49s[^\n]", frase);
    
    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] != '!' && frase[i] != '?' && frase[i] != ',' && frase[i] != ' ')
        {
            frase_ajustada[i] = frase[i];
        }
        
    }
    printf("%s", frase_ajustada);

    return 0;
}

//a && b