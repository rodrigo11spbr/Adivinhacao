#include <stdio.h>
#include <string.h>

void banner()
{
    printf("*********************\n");
    printf("*       Forca       *\n");
    printf("*********************\n");
}

void chutar(char chutes[], int* tentativas)
{
    char chute;
    printf("Chute: \n");
    scanf(" %c", &chute);

    chutes[(*tentativas)] = chute;
    (*tentativas)++;
}

int jaChutou(char chutes[], int tentativas, char letraDigitada)
{
    int achou = 0;
    for(int j = 0; j < tentativas; j++)
    {
        if (chutes[j] == letraDigitada) 
        {
            achou = 1;
            break;
        }
    }
    return achou;
}

int main()
{
    int acertou = 0;
    int enforcou = 0;
    int tentativas = 0;

    char palavra[8];
    char chutes[26];

    sprintf(palavra, "Gandalf"); // Monta o array com uma string
    // printf("%s \n", palavra);

    banner();

    do
    {
        for(int i = 0; i < strlen(palavra); i++)
        {
            if (jaChutou(chutes, tentativas, palavra[i])) 
            {
                printf("%c ", palavra[i]);
            }
            else
            {
                printf("_ ");
            }       
        }

        chutar(chutes, &tentativas);
        
    }
    while (!acertou && !enforcou);
}