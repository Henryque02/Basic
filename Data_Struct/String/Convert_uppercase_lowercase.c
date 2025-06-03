#include<stdio.h>
#include<string.h>

int main()
{
    /*Deixar todo texto maiúsculo ou minúsculo*/
    
    char palavra[50] = {"Bom dia simpatia"};
    strupr(palavra);
    printf("%s", palavra);
    strlwr(palavra);
    printf("\n%s", palavra);
    return 0;
}