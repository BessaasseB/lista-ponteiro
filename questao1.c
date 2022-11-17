#include <stdio.h>

int main(void){

    int x = 10, y = 20, *px, *py;
    
    px = &x;
    py = &y;


    printf("Endereco da variavel X: %d\n", px);
    printf("Endereco da variavel Y: %d\n", py);

  
    if(px > py){
        printf("\nO maior endereco e o da variavel X\n");
    }
    else{
        printf("\nO maior endereco e o da variavel Y\n");
    }

    return 0;
}