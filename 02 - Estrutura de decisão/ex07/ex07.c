#include <stdio.h>

int main(){

    int n1, n2;

    printf("Informe um valor para n1: ");
    scanf("%d", &n1);

    printf("Informe um valor para n2: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("O maior entre os numeros informados tem valor de: %d\n", n1);
    }else if (n2 > n1 ){
        
        printf("O maior entres os numeros informados tem valor de: %d\n", n2);
    }else{
        printf("Os numeros sao iguais\n");
    }
    
    return 0;
}
