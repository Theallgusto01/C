// Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
// exiba o maior endereco.

#include <stdio.h>

void main(){


    int v1;
    int v2;

    printf("Endereço de v1: %p\n", &v1);
    printf("Endereço de v2: %p\n", &v2);
    printf("Maior endereço: ");
    if(&v1 > &v2){
        printf("%p \n", &v1);
    }else{
        printf("%p \n", &v2);
    }
}
