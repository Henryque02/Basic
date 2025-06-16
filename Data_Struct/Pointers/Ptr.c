#include<stdio.h>

int main()
{
    int num = 10, *p;
    p = &num;
    printf("O conteudo de num e %d\n", num); 
    printf("O endereco de memoria de num e %p\n", &num); // %p (tipo ponteiro que guarda endereço de memória) &num (endereço de memória) 
    printf("O valor de p e %p\n", p); // %p (tipo ponteiro que guarda endereço de memória) *p (variável do tipo ponteiro) 
    printf("O valor apontado por p e %d\n", *p); // *p (variável do tipo ponteiro)

    return 0;  

}