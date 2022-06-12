#include <stdio.h>

int main(){

    //Vetores de inteiros
    int numeros[5];//comeca em 0 e termina em 9
    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;


    //Vetores de reais
    float valores[5];//comeca em 0 e termina em 4

    for(int i = 0; i<5; i++){
        valores[i] = numeros[i] / (float)2;
    }

    for(int i = 4; i >= 0; i-- ){
        printf("%f\n", valores[i]);
    }

    return 0;
}
