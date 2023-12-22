/*Faça um programa que receba do usuário um vetor X com 10 posições. 
Em seguida deverão ser impressos o maior e o menor elemento desse vetor.*/

#include<stdio.h>

int main (){

    int x[10];
    int maior=0, menor=0;

    for (int i = 0; i < 10; i++){
        printf("Digite um numero para a posicao (%d): ",i);
        scanf("%d", &x[i]);
        maior=x[0];
        menor=x[0];
        if (x[i]>maior){
            maior=x[i];
        }
        if (x[i]<menor){
            menor=x[i];
        }
    }
    printf("O maior numero do vetor eh %d\nO menor numero do vetor eh %d\n",maior,menor);

    return 0;
}