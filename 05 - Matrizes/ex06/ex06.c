#include <stdio.h>

int main(){

    int A[4][4], B[4][4], C[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Informe os valores da matriz A: ");
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Informe os valores da matriz B: ");
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(A[i][j] >= B[i][j]){
                C[i][j] = A[i][j];
            }else{
                C[i][i] = B[i][j];
            }
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++ ){
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    return 0;
}
