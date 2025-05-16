/*3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1o elemento com o último, o 2a com o penúltimo, ... até o 10a com o 11o. Imprima o vetor N
modificado.*/

#include<stdio.h>

int main(){
    int arr[10], i;
    printf("Digite 10 numeros inteiros: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nVetor inverso: ");
    for (i = 9; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}