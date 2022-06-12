#include <stdio.h>

int main(){

    float n1, n2, media = 0;

    printf("Informe o valor da n1: ");
    scanf("%f", &n1);

    printf("Informe o valor da n2: ");
    scanf("%f", &n2);

    if ( n1 > 0 && n1 <= 10 || n2 > 0 && n2 <= 0){

        media = (n1+n2)/2;

        printf("A media entre n1 e n2 tem valor de: %f\n", media);

    }else{
        printf("As notas informadas estao incorretas!\n");
    }
    
    return 0;
}
