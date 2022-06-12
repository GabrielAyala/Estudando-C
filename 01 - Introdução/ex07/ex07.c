#include <stdio.h>

int main(){

    float cel, far;

    printf("Informe o valor da temperatura em far: ");
    scanf("%f", &far);

    cel = 5 * (far - 32) / 9; 

    printf("O valor da temperatura em cel tem valor de: %.2f", cel);

    return 0;
}
