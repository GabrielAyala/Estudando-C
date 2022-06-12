#include <stdio.h>

int main(){

    int A[2][2], i, j;
    A[0][0] = 1;
    A[0][1] = 2;
    A[1][0] = 3;
    A[1][1] = 4;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }

    return 0;
}
