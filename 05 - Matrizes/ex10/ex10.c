#include <stdio.h>

int main(){

    int A[3][3], i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe os valores da matriz A: ");
            scanf("%d", &A[i][j]);
        }
    }

    soma = A[0][0] + A[1][1] + A[2][2];

    printf("A soma dos numeros que estao na diagonal principal, sendo eles %d, %d e %d tem valor de: %d",A[0][0], A[1][1], A[2][2], soma);

    return 0;
}
