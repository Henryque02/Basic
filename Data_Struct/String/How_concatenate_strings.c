#include<stdio.h>
#include<string.h>

int main(){
    char palavras[50] = {"Oi."};
    strcat(palavras, "Bom dia."); //primeira str é a que vou concatenar e a segunda é o acrescimo que faço na primeiro logo no final
    printf("\n\t%s\n", palavras);
    return 0;
}