#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int vetor[8];
    int quantidade = 0;
    int soma_maior_trinta = 0;
    int soma_total = 0;

    for(int i = 0; i < 8; i++){
        vetor[i] = rand() % 51;
        soma_total += vetor[i];
        if(vetor[i] > 30){
            quantidade++;
            soma_maior_trinta += vetor[i];
        }
        printf("%d ", vetor[i]);
    }

    printf("\n\nQuantidade de numeros maiores que 30: %d \nSoma dos numeros maiores que 30: %d \nSoma de todos os numeros: %d", quantidade, soma_maior_trinta, soma_total);


    return 0;
}
