#include <stdio.h>

int main(){

    int A[10], pot = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        pot = A[i] * A[i];
        printf("%d\n", pot);
    }
    

    return 0;
}
