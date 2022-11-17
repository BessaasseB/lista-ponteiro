#include <stdio.h>

int main(void){

    int vetor[5], *pVetor[5], i=0;
    
    for(i=0; i<5; i++){
        
        pVetor[i] = &vetor[i];

    }

    for(i=0; i<5; i++){

        printf("Informe o numero para a posicao %d: ", i);
        scanf("%d", pVetor[i]);

    }
    
    printf("\n");

    for(i=0; i<5; i++){

        printf("Valor da posicao %d dobrado: %d\n", i, (*pVetor[i] * 2));

    }
    

    return 0;
}