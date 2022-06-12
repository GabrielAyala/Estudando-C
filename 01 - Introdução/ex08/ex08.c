#include <stdio.h>

int main(){

    float cel, kel;

    printf("Informe um valor em kel: ");
    scanf("%f", &kel);

    cel = kel - 273.15;

    printf("O valor em cel fica: %f\n", cel);

    return 0;
}
