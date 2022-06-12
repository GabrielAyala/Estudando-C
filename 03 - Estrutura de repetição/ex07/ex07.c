#include <stdio.h>

int main (){

    int n1, soma = 0;

    for (int i = 0; i<10; i++){

        printf("Informe um valor: ");
        scanf("%d", &n1);

        if (n1 > 0){
            
            soma = soma + n1;

        }
    }
    printf("Soma dos valores informados tem valor de: %d\n", soma);

    return 0;
}
