#include <stdio.h>
#include <math.h>

float calculaVolume(float Raio);

int main(){

    float raio, retorna;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    retorna = calculaVolume(raio);

    return 0;
}

float calculaVolume(float Raio){
    float Volume = 4 / (3 * 3,14 * pow(Raio, 3));

    printf("Volume: %f\n", Volume);

}
