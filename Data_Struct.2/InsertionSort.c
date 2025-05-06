void InsertionSort(int arr[], int n)
{
    
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
