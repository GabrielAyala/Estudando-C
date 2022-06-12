#include <stdio.h>

int main(){

    int A[10];
    float par;

    for(int i=0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        if(A[i] % 2 == 0){
            printf("%d\n", A[i]);
        }        
    }

    return 0;
}
