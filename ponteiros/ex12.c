// Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3
// valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel,
// o segundo menor valor na variavel do meio, e o maior valor na ultima variavel. A funcao
// deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
// Exibir os valores ordenados na tela.

#include <stdio.h>
int ordena(int *n1, int *n2, int *n3);

int main(){

    int a = 3;
    int b = 1;
    int c = 2;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    if(ordena(&a,&b,&c) == 1){
        printf("São todos iguais :P\n");
    }else{
        printf("a = %d, b = %d, c = %d\n", a, b, c);
    }
    
    return 0;
}


int ordena(int *n1, int *n2, int *n3){

    if(*n1 == *n2 && *n2 == *n3){
        return 1;
    }

    int aux;
    if(*n1 > *n2){
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
    if(*n1 > *n3){
        aux = *n1;
        *n1 = *n3;
        *n3 = aux;
    }
    if(*n2 > *n3){
        aux = *n2;
        *n2 = *n3;
        *n3 = aux;
    }
    

    return 0;
}
