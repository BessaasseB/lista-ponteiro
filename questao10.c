#include <stdio.h>

int main(void){

    int a, *b = &a, **c = &b, ***d = &c;


    printf("Informe um numero: ");
    scanf("%d", &a);

    
    printf("\nNumero informado: %d\n", a);
    printf("Dobro: %d\n", (*b * 2));
    printf("Triplo: %d\n", (**c * 3));
    printf("Quadruplo: %d\n", (***d * 4));


    return 0;
}