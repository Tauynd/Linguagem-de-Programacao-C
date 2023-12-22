/*Crie um programa que contenha um array de float contendo 
10 elementos. Imprima o endereço de cada posição desse array.*/

#include<stdio.h>

int main(){

    float vet[10];
    float *pvet;

    printf("Lista de enderecos do vetor:\n");

    for (int i = 0; i < 10; i++){
        pvet=&vet[i];
        printf("O endereco da posicao (%d) eh: %p\n",i,pvet);
    }
    

    return 0;
}