#include <stdio.h>
//Faça um programa que leia dois números e mostre qual deles é o maior.
int main() {

    int N1,N2;

    printf("Digite um numero inteiro\n");
    scanf("%d", &N1);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &N2);

    if (N1 > N2){
        printf("O numero %d eh maior que o numero %d", N1, N2);
    } else if (N2 > N1){
        printf("O numero %d eh maior que o numero %d", N2 , N1);
    }
    
    return 0;
}