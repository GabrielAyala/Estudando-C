#include <stdio.h>

int main () {
    int n1, n2;

    printf("Informe o valor de n1: ");
    scanf("%d", &n1);

    printf("Informe o valor de n2: ");
    scanf("%d", &n2);

    if( &n1 > &n2 ){
        printf("%d tem o maior endereco de memoria\n", n1);
    }else{
        printf("%d tem o maior endereco de memoria\n", n2);
    }

    return 0;
}
