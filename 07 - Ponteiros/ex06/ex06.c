#include <stdio.h>

int somaDobro(int n1, int n2);

int main () {

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    somaDobro(A, B);

    return 0;
}

int somaDobro(int n1, int n2){
    int resultado = (n1 * n1) + (n2 * n2);

    printf("A soma do dobro dos valores tem valor de: %d\n", resultado);
}
