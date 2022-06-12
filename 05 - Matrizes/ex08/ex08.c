#include <stdio.h>

int main(){

    int A[3][3], i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Informe os valores da matriz A: ");
            scanf("%d", &A[i][j]);
        }
    }

    soma = A[0][1] + A[0][2] + A[1][2];

    printf("A soma dos numeros acima da diagonal principal, sendo eles %d, %d e %d tem valor de: %d",A[0][1], A[0][2], A[1][2], soma);

    return 0;
}
