#include <stdio.h>

int main(void){

    float vetor[10], *pVetor;
    int i = 0;

    pVetor = &vetor[i];

    for(i = 0; i < 10; i++){

        printf("Endereco por ponteiro index %d: %i\n", i, pVetor);

        pVetor++;

    }

    return 0;
}