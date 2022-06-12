#include <stdio.h>

int main(){

    float n1, n2;

    printf("Informe o valor de n1: ");
    scanf("%f", &n1);

    printf("Informe o valor de n2: ");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("O maior numero entre os informados tem valor de %.2f", n1);
    }else{
        printf("O maior numero entre os informados tem valor de %.2f", n2);
    }

    return 0;
}
