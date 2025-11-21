// Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao
// que retorne a soma do dobro dos dois n ´umeros lidos. A funcao devera armazenar o dobro
// de A na propria variavel A e o dobro de B na propria variavel B


#include <stdio.h>


int main(){

    int a = 234;
    int b = 123;

    printf("%d\n",soma_dobro(&a, &b));



    return 0;
}

int soma_dobro(int *n1,int *n2){

    *n1 = *n1 * 2; // valor apontado por n1 recebe valor apontado por n1 vezes 2 - mesmo que : a = a * 2
    *n2 = *n2 * 2;

    return *n1 + *n2;
}