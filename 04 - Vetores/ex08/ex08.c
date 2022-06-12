#include <stdio.h>

int main(){

    int A[6];

    for(int i = 0; i < 6; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("%d\n", A[i]);
    }

    return 0;
}
