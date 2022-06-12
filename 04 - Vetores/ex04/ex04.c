#include <stdio.h>

int main(){

    int A[8], X, Y;

    printf("Informe um valor para X: ");
    scanf("%d", &X);

    printf("Informe um valor para Y: ");
    scanf("%d", &Y);
    
    for(int i=0; i<8; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    A[0] = X;
    A[1] = Y;

    for(int i = 0; i<8; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}
