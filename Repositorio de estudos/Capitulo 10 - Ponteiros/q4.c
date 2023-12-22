/*Crie um programa que contenha uma matriz de float contendo três linhas e três colunas. 
Imprima o endereço de cada posição dessa matriz.*/

#include<stdio.h>

int main(){

    float matriz[3][3];
    float *pmatriz;

    printf("Lista de enderecos da matriz: \n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            pmatriz=&matriz[i][j];
            printf("O endereco da posicao (%d,%d) eh: %p\n",i,j,pmatriz);
        }
        
    }
    

    return 0;
}