#include <stdio.h>

int converte(int Horas, int Minutos, int Segundos);

int main(){

    int horas, minutos, segundos, retorna;

    printf("Informe as horas: ");
    scanf("%d", &horas);

    printf("Informe os minutos: ");
    scanf("%d", &minutos);

    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    retorna = converte(horas, minutos, segundos);

    return 0;
}

int converte(int Horas, int Minutos, int Segundos){
    int converteHoras, converteMinutos, totalSegundos;

    converteHoras = Horas*3600;
    converteMinutos = Minutos*60;

    totalSegundos = converteHoras + converteMinutos + Segundos;

    printf("O valor total de tempo em segundos = %d\n", totalSegundos);

}
