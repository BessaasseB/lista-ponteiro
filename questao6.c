#include <stdio.h>

int main(void){

    int vetor[5], i=0, *pVetor;

    pVetor = &vetor[i];

    for ( i = 0; i < 5; i++){
        
        printf("Informe o valor para a posicao %d do vetor: ", i);
        scanf("%d", &vetor[i]);

    }
    
    printf("\n");

    for(i = 0; i < 5; i++){

        if(*pVetor % 2 == 0){
            printf("Endereco da posicao %d: %i\n", i, pVetor);
            pVetor++;
        }

    }


    return 0;
}