// Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
// 2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
// variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B
// tera o valor de A.

#include <stdio.h>
#include <stdlib.h>

void troca(int *A, int *B);

void main(){


    int v1;
    int v2;

    scanf("%d", &v1);
    scanf("%d", &v2);


    printf("Valor de V1: %d\n", v1);
    printf("Valor de V2: %d\n", v2);

    // printf("Endereço V1: %p\n", &v1);
    // printf("Endereço V2: %p\n", &v2);

    troca(&v1, &v2); //passa o endereço de v1 e v2

    printf("Valor de V1: %d\n", v1);
    printf("Valor de V2: %d\n", v2);

}

void troca(int *A, int *B){ //recebe endereços A e B
   
    int aux = *A; // aux recebe o valor apontado por A, aux não é um ponteiro recebe inteiro; 
    *A = *B; // valor apontado por A recebe o valor apontado por B
    *B = aux;
}