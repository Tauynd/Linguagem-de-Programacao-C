/*Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos.*/

#include <stdio.h>

int main (){
    int vet[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um numero inteiro para a posicao %d: ",i+1);
        scanf("%d",&vet[i]);
    }
    printf("Os valores digitados sao:\n");

    for (int i = 0; i < 6; i++){
        printf("Posicao (%d) = %d\n",i+1,vet[i]);
    }
    
    return 0;
}