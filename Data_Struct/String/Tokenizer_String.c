#include<stdio.h>
#include<string.h>

int main()
{
    /*Como dividir uma String em tokens*/

    char palavras[50] = {"Bom dia simpatia!"};
    char *pt;
    pt = strtok(palavras, " ");
    while (pt)
    {
        printf("\nToken: %s", pt);
        pt = strtok(NULL, " ");
    }
    
    return 0;
}