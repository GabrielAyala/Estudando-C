#include <stdio.h>

int verifica(int num1);

int main(){

    int n1, retorno;

    printf("Informe um valor para n1: ");
    scanf("%d", &n1);

    retorno = verifica(n1);

    printf("%d\n", retorno);

    return 0;
}

int verifica(int num1){
    if(num1 > 0){
        return 1;
    }else if(num1 < 0){
        return -1;
    }else{
        return 0;
    }
}
