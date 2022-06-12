#include<stdio.h>

int main()

{
  int n1, maior = 0, menor = 0;
 
    printf("Digite um numero:");
    scanf("%d",&n1);
   
  menor = n1;
  maior = n1;
 
  for( int i = 1; i < 10; i++ ){
   
    printf("Digite um numero:");
    scanf("%d",&n1);
 
    if(n1 > maior) maior = n1;
    if(n1 < menor) menor = n1;
   
  }

  printf("O maior numero tem valor de: %d\n", maior);
  printf("O menor numero tem valor de: %d\n", menor);
 
  return 0;
 
}
