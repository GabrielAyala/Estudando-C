#include <stdio.h>

int main(){

    int A[4][4], i, j, contador = 0;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Informe os valores da matriz: ");
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(A[i][j] < 10){
                contador = contador + 1;
            }
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }

    printf("Total de valores maiores que 10: %d", contador);
    
    return 0;
}
