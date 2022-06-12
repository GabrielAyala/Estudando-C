#include <stdio.h>

int dobro(int num1){
    return num1*2;
}

int main(){

    int n1, retorno;

    printf("Informe um valor para n1: ");
    scanf("%d", &n1);

    retorno = dobro(n1);

    printf("O dobro de %d tem valor de: %d", n1, retorno);

    return 0;
}
