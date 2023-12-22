/*Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.*/

#include <stdio.h>

int Somatorio (int n){
    int soma;
    if (n==1){
        return 1;
    }else{
        soma=n+Somatorio(n-1);
    }
    return soma;
}

int main (){
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    resultado=Somatorio(n);

    printf("O somatorio dos numeros de 1 a N (%d) eh igual a %d",n,resultado);
    return 0;

}