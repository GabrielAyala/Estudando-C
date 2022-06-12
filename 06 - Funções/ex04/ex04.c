#include <stdio.h>
#include <math.h>

int verifica(int num1);

int main(){

    int n1, retorno;

    printf("Informe um valor para n1: ");
    scanf("%d", &n1);

    retorno = verifica(n1);

    return 0;
}

int verifica(int num1){
   int raiz = sqrt(num1);

   if(raiz*raiz == num1){
       printf("O numero e um quadrado perfeito\n");
   }else{
       printf("O numero nao e um quadrado perfeito\n");
   }
}
