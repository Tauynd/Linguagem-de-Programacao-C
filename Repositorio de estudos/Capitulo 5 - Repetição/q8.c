/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
int main (){

    int i,num,soma=0;
    float media;

    for (i = 0; i < 10; i++){
        printf("Digite um numero inteiro\n");
        scanf("%d",&num);
        soma=soma+num;
    }
    media=soma/10;
    
    printf("A soma dos valores eh igual a %d e a media eh igual a %0.2f",soma,media);

    return 0;
}