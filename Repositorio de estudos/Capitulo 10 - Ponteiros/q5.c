/*Crie um programa que contenha um array de inteiros contendo cinco elementos. 
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima 
o dobro de cada valor lido.*/

#include <stdio.h>

int main (){

    int vet[5];
    int *pvet=vet;

    for (int i = 0; i < 5; i++){
        printf("Digite o valor da posicao (%d): ",i);
        scanf("%d",pvet);
        pvet++;
    }

    pvet=vet;
    
    printf("Dobro dos numeros lidos:\n");

    for (int i = 0; i < 5; i++){
        printf("%d\n",*pvet*2);
        pvet++;
    }
    
    return 0;
}