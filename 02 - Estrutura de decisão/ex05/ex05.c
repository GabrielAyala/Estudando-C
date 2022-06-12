#include <stdio.h>

int main(){

    int n1;

    printf("Informe um valor inteiro para n1: ");
    scanf("%d", &n1);

    if((n1 % 2 ) == 0){
        printf("par\n");
    }else{
        printf("impar\n");
    }

    return 0;
}
