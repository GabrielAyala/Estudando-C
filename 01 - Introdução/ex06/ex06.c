#include <stdio.h>

int main(){

float cel, far;

printf("Informe o valor da temperatura em graus celcius: ");
scanf("%f", &cel);

far = (9*cel/5) + 32;

printf("A temperatura informada em Far tem o valor de: %.2f", far);

return 0;

}
