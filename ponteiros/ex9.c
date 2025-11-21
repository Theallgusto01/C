// Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
// endereco de cada posicao desse array.


#include <stdio.h>

int main(){


    float a[3][3];



    for(int i=0;i<3;i++){
        for(int j = 0; j<3;j++){
            printf("%p ", &a[i][j]);
        }
        printf(" \n");
    }




    return 0;
}