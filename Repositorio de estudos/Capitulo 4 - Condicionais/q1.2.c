/*Faça um programa que leia dois números e mostre qual deles é o maior*/

#include<stdio.h>
int main (){

    int num1,num2;

    printf("Digite dois numeros diferentes\n");
    scanf("%d %d", &num1,&num2);

    if (num1>num2){
        printf("O numero %d eh maio que o numero %d", num1, num2);
    }else if (num2>num1){
        printf("O numero %d eh maior que o numero %d",num2,num1);
    }else if (num1=num2){
        printf("Os numeros sao iguais");
    }
    

    return 0;
}