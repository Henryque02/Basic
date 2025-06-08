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
#include<ctype.h>

void verificador_palindroma(int tamanho, char vetor[])
{
    int verificador = 1;
    for (int i = 0; i < tamanho/2; i++)
  {
    if (tolower(vetor[i]) != tolower(vetor[tamanho - 1 - i]))
    {
      verificador = 0;
      break;
    }
  }

  if (verificador)
  {
    printf("A palavra e palindroma!");
  }
  else
    printf("A palavra nao e palindroma!");
}

int main()
{
    char frase[50], frase_ajustada[50];
    int tamanho_frase, j = 0;

    printf("Digite uma frase: ");
    scanf(" %49[^\n]", frase);
    tamanho_frase = strlen(frase);
    
    for (int i = 0; i < tamanho_frase; i++)
    {
        if (isalpha(frase[i]))
        {
            frase_ajustada[j++] =frase[i];
        }
    }
    
    frase_ajustada[j] = '\0';

    verificador_palindroma(j, frase_ajustada);

    return 0;
}