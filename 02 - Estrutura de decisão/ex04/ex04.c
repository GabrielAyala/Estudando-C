#include <stdio.h>
#include <math.h>

int main(){

    float n1;
    int raiz;

    printf("Informe um valor para n1: ");
    scanf("%f", &n1);

    raiz = sqrt(n1);

    if (n1 > 0){
        printf("O quadrado de n1 tem valor de: %.2f\n", n1*n1);
        printf("A raiz de n1 tem valor de: %d\n", raiz);
    }else{
        printf("Valor invalido\n");
    }

    return 0;
}
