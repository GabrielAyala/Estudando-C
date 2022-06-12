#include <stdio.h>
#include <math.h>

float calculaHipotenusa(float catetoA, float catetoB);

int main(){

    float a, b, retorna;

    printf("Informe o valor do cateto a: ");
    scanf("%f", &a);

    printf("Informe o valor do cateto b: ");
    scanf("%f", &b);

    retorna = calculaHipotenusa(a, b);

    return 0;
}

float calculaHipotenusa(float catetoA, float catetoB){
    float calculaHipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

    printf("%f\n", calculaHipotenusa);
}
