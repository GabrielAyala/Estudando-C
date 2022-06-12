#include <stdio.h>

int main(){

    int A[3][3], i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe os valores da matriz A: ");
            scanf("%d", &A[i][j]);
        }
    }

    soma = A[1][0] + A[2][0] + A[2][1];

    printf("A soma dos numeros abaixo da diagonal principal, sendo eles %d, %d e %d tem valor de: %d",A[1][0], A[2][0], A[2][1], soma);

    return 0;
}
