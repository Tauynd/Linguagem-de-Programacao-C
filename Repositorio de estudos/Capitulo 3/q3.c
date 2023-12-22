/*Faça um programa que leia três valores inteiros e mostre sua soma*/

#include <stdio.h>
int main (){

    int num1,num2,num3,soma;
    
    printf("Digite 3 numeros: \n");
    scanf("%d %d %d", &num1,&num2,&num3);

    soma = num1+num2+num3;

    printf("\nA soma dos 3 numeros eh igual a %d", soma);

    return 0;
}