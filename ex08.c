#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int vetor[5];
    int vetor_cubo[5];

    for(int i = 0; i < 5; i++){
        vetor[i] = rand() % 101;
        vetor_cubo[i] = pow(vetor[i], 3);
    }

    printf("Vetor\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\n\nVetor cubo\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", vetor_cubo[i]);
    }

    return 0;
}
