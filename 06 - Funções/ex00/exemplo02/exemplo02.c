#include <stdio.h>

int soma(int num1, int num2){
    return num1 + num2;
}

int main(){

    int n1, n2, retorno;

    printf("Informe um valor para n1: ");
    scanf("%d", &n1);

    printf("Informe um valor para n2: ");
    scanf("%d", &n2);

    retorno = soma(n1, n2);

    printf("A soma de %d com %d tem valor de: %d", n1, n2, retorno);

    return 0;
}
