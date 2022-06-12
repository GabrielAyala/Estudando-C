#include <stdio.h>

/*
Utilizando While: enquanto...

Usar quando se precisa de um loop onde n se tenha um numero fixo de elementos
mas que tenha um criterio de parada 
e antes do loop ser iniciado a condicao e checada

*/

int main(){

    int n1, soma = 0;

    printf("Insira um valor para n1:");
    scanf("%d", &n1);

    while (n1 !=0){
        soma = soma + n1;

        printf("Informe um valor novo:");
        scanf("%d", &n1);
    }

    printf("A soma total tem valor de: %d\n", soma);
    
    return 0;
}
