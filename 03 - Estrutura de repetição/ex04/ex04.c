#include <stdio.h>

int main(){

    int n1;

    n1 = 0;

    for (int i = 0; i < 100000; i++){

        n1 = n1 + 1000;

        printf("%d\n", n1);

    }


    return 0;
}
