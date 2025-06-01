#include<stdio.h>

int main(){
    char palavras[50] = {"Hi. let's learn to program"};
    int i =0;
    while (palavras[i] != '\0')
    {
        printf("%d = %c\n", i, palavras[i]);
        i++;
    }
    
    return 0;
}