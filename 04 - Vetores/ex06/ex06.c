#include <stdio.h>

int main(){

    int A[10], maior = 0, menor = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        if(A[i] > maior){
            maior = A[i];
        }else{
            menor = A[i];
        }
        
    }
    printf("O maior numero do vetor tem valor de: %d\n", maior);
    printf("O menor numero do vetor tem valor de: %d\n", menor);

    return 0;
}
