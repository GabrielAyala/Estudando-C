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
    int a = N1;
    int b = N2;

    N1 = b;
    N2 = a;

    printf("n1 = %d\n", N1);
    printf("n2 = %d\n", N2);
}
