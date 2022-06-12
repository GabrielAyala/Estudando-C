#include <stdio.h>

//Utilizando for: para...
//Usar quando tenha um numero fixo de elementos

int main(){

    int n1, soma = 0;

    for (int i = 0; i < 5; i++){

    printf("Informe um numero: ");
    scanf("%d", &n1);

    soma = soma + n1;

    }

    printf("A soma tem valor de %d\n", soma);

    return 0;
}
