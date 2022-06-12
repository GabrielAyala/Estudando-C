#include <stdio.h>

/*Estrutura das funções

- tipo de retorno
- nome
- parametros de entrada (opcional)
- implementação
- retorno

*/


void msg(){ //fazendo uma função
    printf("Bem Vindo");
}

int soma(int n1, int n2){
    int res = n1 + n2;
    return res;
}

void proximo_char(char charctere){
    printf("%c", &charctere + 1); 
}

int main(){

    printf("Olá");

    msg();
    
    int retorno = soma(4, 6);

    printf("Retorno = %d\n", retorno);

    printf("Retorno = %d\n", soma(4, 6));

    char cara = "a";
    proximo_char(cara);

    return 0;
}
