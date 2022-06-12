#include <stdio.h>

int main(){

    int A[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            A[i][j] = (i*j);
            printf("%d\n",A[i][j]);
        }
    }

    return 0;
}
