#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[],int n)
{
    int i, j , trocou;

    for (i = 0; i < n-1; i++)
    {
        trocou = 0;

        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                trocou = 1;
            }
        }   

        if (trocou == 0)
        {
            break;
        }

    }
}

void imprimirArray(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array original: \n");
    imprimirArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Array ordenado: \n");
    imprimirArray(arr, n);
    
    return 0;
}

/* 
    for  (i = 0; i < 10; i++)
    {
        if (vetor[i] > vetor[i+1])
        {
            aux = vetor[i+1];
            vetor[i+1] = vetor[i];
        }
    }
    printf("\nVetor ordenado: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d", vetor[i]);

    }
    return 0;*/