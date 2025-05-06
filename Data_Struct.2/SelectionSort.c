#include<stdio.h>
#include<stdlib.h>

void Selectionsort(int arr[], int n)
{
    int menor, i, j;

    for (i = 0; i < n-1; i++)
    {
        menor = i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[menor])
            {
                menor = j;
            }
        }
        
        if (menor != i)
        {
            int aux = arr[menor];
            arr[menor] = arr[i];
            arr[i] = aux;
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
    
    Selectionsort(arr, n);
    
    printf("Array ordenado: \n");
    imprimirArray(arr, n);
    
    return 0;
}
