#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{  
    srand(time(NULL));
    int lista[8];
    int pesquisa;
    int encontrou = 0;

    for(int i = 0; i < 8; i++){
        lista[i] = rand() % 10;
        printf("%d ", lista[i]);
    }    

    printf("\nPesquisar na lista: ");
    scanf("%d", &pesquisa);

    for(int i = 0; i < 8; i++){
        if(pesquisa == lista[i]){
            encontrou = i;
        }
    }

    if(encontrou != 0){
        printf("\nA ultima ocorrencia do elemento foi encontrado na posicao %d da lista", encontrou);
    }else{
        printf("O elemento nao foi encontrado na lista");
    }
    
    return 0;
}
