#include <stdio.h>

int main(){

    int A[5][5], i, j, X = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Informe os valores da matriz: ");
            scanf("%d", &A[i][j]);
        }
    }

    printf("Informe um valor para X: ");
    scanf("%d", &X);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(A[i][j] == X){
                printf("A[%d][%d] = %d", i, j, A[i][j]);
            }
        }
    }

    return 0;
}
