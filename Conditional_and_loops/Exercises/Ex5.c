/*11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a 
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
 se torne menor que 0,05 gramas.*/

 #include<stdio.h>

 int main(){
    float massa_inicial;
    int tempo = 0;
    printf("Insira a massa inicial: ");
    scanf("%f", &massa_inicial);
    while (massa_inicial >= 0.05)
    {
        massa_inicial = massa_inicial/2;
        tempo += 50;
    }
    printf("O tempo necessario para que a massa se torne menor que 0.05 foi de %d segundos", tempo);

    return 0;
 }