//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>
int main (){
    int num,contador;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    for (contador=num; contador>=0; contador--){
        printf("\n%d",contador);
    }
    
    return 0;
}