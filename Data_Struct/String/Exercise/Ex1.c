/*
Como descobrir se uma palavra é palíndroma
  Asa
  arara
  ama
  osso
  radar
  socos
  reviver
  */

#include<stdio.h>
#include<string.h>

int main()
{
  char palavra[20];

  printf("Digite uma palavra: ");
  scanf("%19s", palavra);

  int tamanho = strlen(palavra), palindroma = 1;

  for (int i = 0; i < tamanho/2; i++)
  {
    if (tolower(palavra[i]) != tolower(palavra[tamanho - 1 - i]))
    {
      palindroma = 0;
      break;
    }
  }

  if (palindroma)
  {
    printf("A palavra e palindroma!");
  }
  else
    printf("A palavra nao e palindroma!");

  return 0;
}