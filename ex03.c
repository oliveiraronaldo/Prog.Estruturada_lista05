#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor_a[10];
    int vetor_b[10];
    int vetor_c[10];

    int incremento_a = 0;
    int incremento_b = 0;
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            vetor_a[incremento_a] = i;
            incremento_a++;
        }
        if(i > 9 && i < 20){
            vetor_b[incremento_b] = i;
            incremento_b++;
        }
    }

    printf("Vetor A\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor_a[i]);
    }

    printf("\n\nVetor B\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor_b[i]);
    }

    printf("\n\nVetor Soma\n");
    for(int i = 0; i < 10; i++){
        vetor_c[i] = vetor_a[i] + vetor_b[i];
        printf("%d ", vetor_c[i]);
    }
    

    return 0;
}
