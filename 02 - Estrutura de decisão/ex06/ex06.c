#include <stdio.h>

int main(){

    int n1, n2;

    printf("Informe o valor de n1: ");
    scanf("%d", &n1);

    printf("Informe o valor de n2: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("O maior numero entre os dois tem valor de: %d\n", n1 );
        printf("A diferenca entre os numeros tem valor de: %d\n", n1 - n2);
    }else{
        printf("O maior numero entre os dois tem valor de: %d\n", n2 );
        printf("A diferenca entre os numeros tem valor de: %d\n", n2 - n1);
    }

    return 0;
}
