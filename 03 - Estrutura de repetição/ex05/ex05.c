#include <stdio.h>

int main(){

    int n1, soma = 0;

    for( int i = 0; i < 10; i++){

        printf("Informe um valor: ");
        scanf("%d", &n1);

        soma = soma + n1;

        
    }

    printf("A soma dos numeros informados tem valor de: %d\n", soma);    

    return 0;
}
