// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
// apenas aritm ´etica de ponteiros, leia esse array do teclado e imprima o dobro de cada
// valor lido.


#include <stdio.h>

int main(){

    int a[5];

    int *b = a;


    for(int i=0;i<5;i++){
        scanf("%d", (b + i));
    }

    for(int i = 0; i<5; i++){
        printf("%d \n", *(b+i)* 2);
    }

    return 0;
}