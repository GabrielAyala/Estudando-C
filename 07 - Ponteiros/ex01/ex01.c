#include <stdio.h>

int main() {

    int i = 1;
    int *pInt = &i;

    float f = 0.6;
    float *pFloat = &f;

    char c = 'a';
    char *pChar = &c;

    *pInt = 2;
    *pFloat = 0.8;
    *pChar = 'b';

    printf("Inteiro %i \n", *pInt);
    printf("Float %d \n", *pFloat);
    printf("Char %c \n", *pChar);

    return 0;
}
