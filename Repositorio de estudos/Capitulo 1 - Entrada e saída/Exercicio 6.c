//Elaborar um programa que efetue a leitura de três valores (A, B e C) 
//e apresente como resultado final à soma dos quadrados dos três valores lidos.

#include <stdio.h>
#include <math.h>

int main (){
    float A,B,C,SOMA;

    printf("Digite o primeiro numero\n");
    scanf("%f",&A);

    printf("Digite o segundo numero\n");
    scanf("%f",&B);

    printf("Digite o terceiro numero\n");
    scanf("%f",&C);

    SOMA=pow(A,2)+pow(B,2)+pow(C,2);

    printf("A soma dos quadrados dos tres numeros eh igual a %0.2f",SOMA);

    return 0;
}