//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>
int main (){
    int num,contador;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    for (contador=0; contador<=num; contador++){
        printf("\n%d", contador);
    }
    
    return 0;
}