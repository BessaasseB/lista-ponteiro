#include <stdio.h>

int main(void){

    int y, x, *px, *py;


    printf("Informe um numero para a variavel X: ");
    scanf("%d", &x);

    printf("Informe um numero para a variavel Y: ");
    scanf("%d", &y);    

    px = &x;
    py = &y;
  
    printf("\n%d\n", px);
    printf("\n%d\n", py);

    if(px > py){
        printf("\nConteudo da variavel com o maior endereco: %d\n", *px);
    }
    else{
        printf("\nConteudo da variavel com o maior endereco: %d\n", *py);
    }

    return 0;
}