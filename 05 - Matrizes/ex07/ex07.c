#include <stdio.h>

int main(){

    int A[10][10], i, j;
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j){
                A[i][j] = 2*i + 7*j - 2;
            }else if(i == j){
                A[i][j] = 3*(i*i) -1;
            }else if(i > j){
                A[i][j] = 4*(i*i*i) - 5*(j*j) + 1;
            }
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }

    return 0;
}
