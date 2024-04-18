#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int vetor[4];

    for(int i = 0; i < 4; i++){
        vetor[i] = rand() % 2;

        printf("%d ", vetor[i]);
    }    
    return 0;
}
