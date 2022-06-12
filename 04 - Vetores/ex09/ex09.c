#include <stdio.h>

int main(){

    int A[6], i;
    
    for(i = 0; i < 6; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(i = 5; i >=0; i--){
        if(A[i] % 2 == 0){
            printf("%d\n", A[i]);
        }
    }

    return 0;
}
