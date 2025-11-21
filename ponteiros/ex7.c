// Crie um programa que contenha uma funcao que permita passar por parametro dois
// numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
// armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera
// modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.


#include <stdio.h>

void soma(int* a, int * b);

int main(){

    int A = 345;
    int B = 543;

    printf("A: %d\n", A);
    printf("B: %d\n", B);

    soma(&A, &B);

    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;
}

void soma(int * a, int * b){

    *a = *a + *b;

}