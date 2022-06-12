#include <stdio.h>

int main(){

    float n1, n2;

    printf("Informe um valor real para n1: ");
    scanf("%f", &n1);

    n2 = n1*n1;

    printf("O quadrado de n1 tem valor de: %.2f", n2);

    return 0;
}
