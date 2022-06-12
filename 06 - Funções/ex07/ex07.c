#include <stdio.h>

int converterTemperatura(float Cel);

int main(){

    float cel, retorna;

    printf("Informe o valor da temperatura em Cel: ");
    scanf("%f", &cel);

    retorna = converterTemperatura(cel);

    return 0;
}

int converterTemperatura(float Cel){
    float Far = ( (Cel * 9 / 5 ) + 32);

    printf("A temperatura em Far tem valor de: %f\n", Far);
}
