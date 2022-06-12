#include <stdio.h>

int main(){

    int n1;

    do{
        printf("%d\n", n1);

        n1 = n1 + 1;
    }
    while(n1 <= 100);

    return 0;
}