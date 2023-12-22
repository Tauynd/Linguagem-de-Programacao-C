/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.*/

#include<stdio.h>
int main (){

    int i,vetor[10];
    int contador=0;

    for (i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
           
    }
    printf("Os numeros pares digitados foram: ");
    
    for (i = 0; i < 10; i++){
        if (vetor[i]%2==0){
        contador++;
        printf("|%d| ",vetor[i]);
    }
    }
    printf("\nTotal de pares eh igual a %d", contador);
    
    return 0;
}