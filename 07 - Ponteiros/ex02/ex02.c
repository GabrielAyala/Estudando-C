#include <stdio.h>

int main () {

    int n1 = 5, n2 = 15;

    
    if ( &n1 > &n2 ){
        printf("O endereco de memoria de %d e o maior\n", n1);
    }else{
        printf("O endereco de memoria de %d e o maior\n", n2);
    }

    return 0;
}
