#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor[10];

    int incremento = 0;
    for(int i = 2; i <= 20; i+=2){
        vetor[incremento] = i;
        printf("%d ", vetor[incremento]);
        incremento++;
    }

    return 0;
}
