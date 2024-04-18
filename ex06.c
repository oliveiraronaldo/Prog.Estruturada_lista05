#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int vetor[4];
    int decimal = 0;

    for(int i = 3; i >= 0; i--){
        vetor[i] = rand() % 2;

        decimal += vetor[i] * pow(2, i);

        printf("%d ", vetor[i]);
    }    

    printf("\nValor decimal: %d", decimal);
    return 0;
}
