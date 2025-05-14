/*1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.*/

#include<stdio.h>

int main(){
    int arr[10], arr2[10], i;

    printf("Digite 10 valores para preencher o array: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr2[i] = arr[i]*arr[i];
    }

    printf("Numeros do primeiro vetor: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNumeros do segundo vetor: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}