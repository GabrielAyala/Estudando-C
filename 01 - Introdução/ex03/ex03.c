#include <stdio.h>

int main(){

    int n1, n2, n3, soma;

    printf("Informe um valor inteiro para n1: ");
    scanf("%d", &n1);

    printf("Informe um valor inteiro para n2: ");
    scanf("%d", &n2);

    printf("Informe um valor inteiro para n3: ");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;

    printf("A soma dos numeros informados tem valor de: %d", soma);
    
    return 0;
}
