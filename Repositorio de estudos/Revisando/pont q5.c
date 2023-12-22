/*Crie um programa que contenha um array de inteiros contendo cinco elementos. 
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima 
o dobro de cada valor lido.*/

#include<stdio.h>

int main (){

    int array[5];
    int *pont=array;

    for (int i = 0; i < 5; i++){
        printf("Digite um valor para a posicao [%d]: ",i);
        scanf("%d",&array[i]);
        pont++;
    }

    pont=array;

    for (int i = 0; i < 5; i++){
        printf("%d\n", *pont*2);
        pont++;
    }
    
    return 0;
}