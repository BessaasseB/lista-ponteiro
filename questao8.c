#include <stdio.h>


void preencheVetor(int *vetor, int num){

    int i = 0;

    for(i = 0; i < 5; i++){

        *vetor = num;
        vetor++;

    }

    for(i = 0; i < 5; i++){
        printf("Index %d: %i\n", i, *vetor);
    }

}


int main(void){

    int vetor[5], num = 2;


    preencheVetor(vetor, num);

    return 0;
}