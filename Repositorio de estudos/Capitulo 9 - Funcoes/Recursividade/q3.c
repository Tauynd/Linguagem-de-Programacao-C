/*Crie uma função recursiva que receba um número inteiro N 
e imprima todos os números naturais de 0 até N em ordem decrescente.*/

#include<stdio.h>

void Numeros (int n){
    if (n>=0){
        printf("%d\n",n);
        Numeros(n-1);
    }
}

int main (){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    Numeros(n);
    
    return 0;
}