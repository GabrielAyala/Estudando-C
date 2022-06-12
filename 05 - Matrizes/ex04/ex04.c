#include <stdio.h>

int main(){

    int A[4][4], i, j, maior = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Informe os valores da matriz: ");
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(A[i][j] > maior){
                maior = A[i][j];
            }
        }
    }

    printf("A[%d][%d] = %d", i, j, maior);

    return 0;
}
