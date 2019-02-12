#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXIMO_DE_TENTATIVAS 3

int main()
{
    printf("Adivinachao \n");
    unsigned int dia0 = time(0); 
    srand(dia0);
    int numeroSecreto = rand();
    int acertou = 0;
    short tentativas = MAXIMO_DE_TENTATIVAS;
    int numeroDigitado;
    float pontuacao = 100;


    while(acertou == 0 && tentativas != 0)
    {   
        printf("Numero: ");
        scanf("%d", &numeroDigitado);

        if (numeroDigitado < 0) 
        {
            printf("Numero nao deve ser negativo \n");
            continue;
        }
        else if(numeroDigitado < numeroSecreto)
        {
            tentativas -= 1;
            pontuacao -= abs((float)numeroDigitado / 2);
            printf("O numero %d e menor \n tentativas %d de %d \n", numeroDigitado, MAXIMO_DE_TENTATIVAS, tentativas);
        }
        else if (numeroDigitado > numeroSecreto)
        {
            tentativas -= 1;
            pontuacao -= abs((float)numeroDigitado / 2);
            printf("O numero %d e maior \n tentativas %d de %d \n", numeroDigitado, MAXIMO_DE_TENTATIVAS, tentativas);
        }
        else
        {
            printf("acertou \n");
            printf("Sua pontuacao %.2f", pontuacao);
            acertou = 1;
        }  
    }
}