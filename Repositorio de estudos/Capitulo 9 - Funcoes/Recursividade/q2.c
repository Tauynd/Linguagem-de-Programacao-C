/*Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.*/

#include <stdio.h>

int Somatorio (int n){
    int soma;

    if (n<1){
        return 0;
    } else {
        soma=n+Somatorio(n-1);
    }
    return soma;
}

int main (){
    int n,resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado=Somatorio(n);

    printf("A soma dos numeros de 1 a %d eh igual a %d\n", n, resultado);

}