#include <stdio.h>

int main(){

/*
do while: faca ... enquanto...
Usar quando se precise de um loop onde n se tenha um numero fixo de elementos
mas que tenha um criterio de parada
a condicao de parada e checada apos a primeira execucao
*/

    int n1, soma = 0;
    
    do{
        printf("Informe um valor para n1: ");
        scanf("%d", &n1);

         soma = soma + n1;
    }
    while (n1 != 0);
    
    printf("O valor da soma dos numero tem valor de: %d\n", soma);

    return 0;
}
