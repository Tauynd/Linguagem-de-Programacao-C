/*Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/

#include <stdio.h>
int main (){

    int i,lista[5],soma;
    float media;

    soma=0;

    for (i = 0; i < 5; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &lista[i]);
        soma=soma+lista[i];
    }    
    printf("Os valores digitados sao: ");

    for (i = 0; i < 5; i++){
        printf("|%d| ", lista[i]);
    }
    
    media=soma/5.0;
    printf("\nA media dos valores eh igual a %0.2f",media);
    

    return 0;

}