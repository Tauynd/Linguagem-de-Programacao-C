//Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

#include <stdio.h>
int main (){
    int num,contador,numImpares;
    numImpares = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
  
    for (contador = 1; contador<=num; contador++){
        printf("\n%d",numImpares);
        numImpares += 2;
        }        

    return 0;
}