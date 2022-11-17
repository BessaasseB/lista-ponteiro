#include <stdio.h>
#include <string.h>

void printaVetor(int *pVetor, int size){

    int i;

    for(i=0; i<size; i++){
        printf("Valor na posicao %d: %d\n", i, *pVetor);
        *pVetor++;

    }

}

int main(void){

    int vetor[5] = {1, 2, 3, 4, 5}, *pVetor;

    pVetor = &vetor;

    printaVetor(pVetor, 5);


    return 0;
}