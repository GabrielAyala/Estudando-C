#include <stdio.h>
#include <math.h>

int main(){

    float n1;
    int raiz;    

    printf("Informe um valor para n1: ");
    scanf("%f", &n1);

    raiz = sqrt(n1);

    if (n1 > 0 ){
        printf("A raiz quadrada de n1 tem valor de: %d", raiz);
    }else{
        printf("Valor invalido");
    }

    return 0;
}
