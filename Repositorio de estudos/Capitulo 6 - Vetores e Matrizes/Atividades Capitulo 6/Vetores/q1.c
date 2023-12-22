/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
tela os valores lidos.*/

#include<stdio.h>
int main (){

    int i, lista[6];

    for (i = 0; i < 6; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d",&lista[i]);
    } 
    printf("Os valor digitados sao: ");

    for (i=0; i<6; i++){
        printf("|%d| ",lista[i]);
    }

    return 0;

}