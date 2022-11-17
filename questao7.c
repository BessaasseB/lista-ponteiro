#include <stdio.h>
#include <string.h>

int checkString(char *str1, char *str2){

    char *ptr = strstr(str1, str2);

    return ptr;

}


int main(void){

    char string1[] = "Teste da setima questao", string2[] = "setima";

    if(checkString(string1, string2) != NULL){
        printf("A string '%s' faz parte da string '%s'\n", string2, string1);
    }
    else{
        printf("A string '%s' nao faz parte da string '%s'\n", string2, string1);
    }

    return 0;
}