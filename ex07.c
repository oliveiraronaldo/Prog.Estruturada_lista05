#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int vetor[4];
    int decimal = 0;
    int palpite;
    int erros = 3;
    int acertos = 0;


    while(erros > 0){
        decimal = 0;
        for(int i = 3; i >= 0; i--){
            vetor[i] = rand() % 2;

            decimal += vetor[i] * pow(2, i);

            printf("%d ", vetor[i]);
        }    

        printf("\nNumero decimal correspondente: ");
        scanf("%d", &palpite);
        if(palpite == decimal){
            acertos++;
            printf("\nAcertou! \nVidas: %d\n\n", erros);
        }else{
            erros--;
            printf( "\nErrou! \nVidas: %d\n\n", erros);
        }

    }

    printf("\nNumero maximo de erros atingido!");
    return 0;
}
