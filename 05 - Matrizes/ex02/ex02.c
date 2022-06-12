#include <stdio.h>

int main(){

    int A[5][5], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                A[i][j] = 1;
            }else{
                A[i][j] = 0;
            }
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }

    return 0;
}
