/*Crie um programa que leia do teclado seis valores inteiros e em 
seguida mostre na tela os valores lidos na ordem inversa.*/

#include <stdio.h>

int main (){

    int vet[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um numero para a posicao (%d): ",i);
        scanf("%d", &vet[i]);
    }
    
    printf("Os valores lidos na ordem inversa sao:\n");

    for (int i = 5; i >= 0; i--){
        printf("Posicao (%d) = %d\n",i,vet[i]);
    }
    

    return 0;
}