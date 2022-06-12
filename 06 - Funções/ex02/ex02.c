#include <stdio.h>

void dataAtual(int diaAtual, int mesAtual, int anoAtual){
    const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Data atual: %d de %s de %d\n", diaAtual, meses[mesAtual - 1], anoAtual);
}

int main(){

    int dia, mes, ano;

    printf("Informe o dia atual: ");
    scanf("%d", &dia);

    printf("Informe o mes atual: ");
    scanf("%d", &mes);

    printf("Informe o ano atual: ");
    scanf("%d", &ano);

    dataAtual(dia, mes, ano);

    return 0;
}
