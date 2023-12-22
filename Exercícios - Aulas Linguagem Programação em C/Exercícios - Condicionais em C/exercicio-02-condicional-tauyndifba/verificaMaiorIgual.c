#include <stdio.h>
//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima a mensagem "Números iguais".
int main (){
  int N1,N2;

    printf("Digite um numero inteiro\n");
    scanf("%d", &N1);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &N2);

    if (N1 > N2){
        printf("O numero %d eh maior que o numero %d", N1, N2);
    } else if (N2 > N1){
        printf("O numero %d eh maior que o numero %d", N2 , N1);
    } else if (N1 == N2){
        printf("Numeros iguais");
    }

    return 0;
}