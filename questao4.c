#include <stdio.h>

int main(void){

    float matriz[3][3], *pMatriz;
    int i=0, j=0;

    pMatriz = &matriz[i][j];

    for(i = 0; i< 3; i++){

        for(j=0; j < 3; j++){

            printf("Endereco do item da liha %d coluna %d: %i\n", i, j, pMatriz);

            pMatriz++;

        }

    }

    return 0;
}