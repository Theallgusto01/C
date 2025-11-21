// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
// teiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de
// cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a
// modificação.


#include <stdio.h>


void main(){


    int i1 = 10;
    float f1 = 3.14;
    char c1 = 'T';

    int * pi;
    float * pf;
    char * pc;

    pi = &i1;
    pf = &f1;
    pc = &c1;

    printf("%d \n", i1);
    printf("%f \n", f1);
    printf("%c \n", c1);

    *pi = 443;
    *pf = 3.141592;
    *pc = 'A';

    printf("%d \n", i1);
    printf("%f \n", f1);
    printf("%c \n", c1);




}