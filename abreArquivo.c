#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "abreArquivoHeader.h"

void leArquivo()
{
    FILE* f;
    f = fopen("Palavras.txt", "r");

    char palavra[20];

    for(int i = 0; i < 4; i++)
    {
        fscanf(f, "%s", palavra);
        printf("%s \n", palavra);   
    }
    fclose(f);
}

int main()
{
    leArquivo();
}