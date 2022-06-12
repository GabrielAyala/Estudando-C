#include <stdio.h>

int main(){

    int i;
    //Matrizes = Arrays multi dimensionais 

    /* 
    Exemplo: int           [00] [01] [02] [03] [04]
                           [10] [11] [12] [13] [14]
                 A[5][5] = [20] [21] [22] [23] [24]
                           [30] [31] [32] [33] [34]
                           [40] [41] [42] [43] [44]
    */

   char A[3][50];

   for(i = 0; i < 3; i++){
       printf("Diga seu nome: ");
       scanf("%s", A[i]);
   }

    for(i = 0;  i<3; i++){
    printf("Ola %s\n", A[i]);
    }

    return 0;
}
