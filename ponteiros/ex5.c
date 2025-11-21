// Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes
// 2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
// segunda variavel. Escreva o conteudo das 2 variaveis na tela.


#include <stdio.h>

int maior(int * n1, int * n2);

int main(){

    int a = 345;
    int b = 44;

    printf("Maior : %d\n", maior(&a,&b));

    return 0;
}


int maior(int * n1, int * n2){
    int maior;
    if(*n1 > *n2){
        maior = *n1;
    }else{
        maior = *n2;
    }
    return maior;
}