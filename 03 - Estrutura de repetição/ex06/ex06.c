#include <stdio.h>

int main(){

    int n1, media = 0;

    for (int i = 0; i < 10; i++){

        printf("Informe um valor: ");
        scanf("%d", &n1);

        media = (media + n1);

    }

    printf("A media dos numeros informados tem valor de: %d\n", media / 10);

    return 0;
}
