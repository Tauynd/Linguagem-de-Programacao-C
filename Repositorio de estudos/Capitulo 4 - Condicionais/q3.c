/*Faça um programa que leia um número inteiro e verifique se esse número é par
ou ímpar.*/

#include<stdio.h>
int main (){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    if (num%2==0){
        printf("O numero %d eh par\n",num);
    }else
    printf("O numero %d eh impar\n",num);
    

    return 0;

}