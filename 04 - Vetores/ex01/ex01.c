#include <stdio.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    for(int i = 0; i < 6; i++){
        soma = A[0] + A[1] + A[5];
    }

    printf("A soma tem valor de: %d\n", soma);

    A[4] = 100;

    printf("%d\n", A[0]);
    printf("%d\n", A[1]);
    printf("%d\n", A[2]);
    printf("%d\n", A[3]);
    printf("%d\n", A[4]);
    printf("%d\n", A[5]);

    return 0;
}
