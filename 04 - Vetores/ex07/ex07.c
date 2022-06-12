#include <stdio.h>

int main(){

    int A[10], maior = 0, posicao = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        if(A[i] > maior){
            maior = A[i];
            posicao = i;       
        }
        
    }

    printf("A[%d]: %d\n", posicao, maior);

    return 0;
}
