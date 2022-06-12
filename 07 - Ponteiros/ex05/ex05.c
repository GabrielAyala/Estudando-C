#include <stdio.h>

int recebeValores(int N1, int N2);

int main () {

    int n1, n2;

    printf("Informe o valor de n1: ");
    scanf("%d", &n1);

    printf("Informe o valor de n2: ");
    scanf("%d", &n2);

    recebeValores(n1, n2);

    return 0;
}

int recebeValores(int N1, int N2){
    if ( N1 > N2 ) {
        printf("Maior valor = %d\n", N1);
        printf("Menor valor = %d\n", N2);
    }else{
        printf("Maior valor = %d\n", N2);
        printf("Menor valor = %d\n", N1);
    }
}
