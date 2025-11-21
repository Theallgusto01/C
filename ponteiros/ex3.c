// Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
// teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.


#include <stdio.h>

void main(){


    int v1;
    int v2;

    scanf("%d", &v1);
    scanf("%d", &v2);

    printf("Valor de V1: %d\n", v1);
    printf("Valor de V2: %d\n", v2);

    printf("Endereço de v1: %p\n", &v1);
    printf("Endereço de v2: %p\n", &v2);
    printf("Maior endereço: ");

    if(&v1 > &v2){
        printf("%p \n", &v1);
    }else{
        printf("%p \n", &v2);
    }
}
