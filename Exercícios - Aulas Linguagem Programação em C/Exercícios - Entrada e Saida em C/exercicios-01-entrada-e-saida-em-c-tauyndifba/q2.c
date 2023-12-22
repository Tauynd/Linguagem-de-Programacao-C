#include <stdio.h>
//Escreva um programa que receba um número qualquer e mostre o seu dobro.

int main() {
    float N1,DOBRO;

    printf("Digite um numero qualquer\n");
    scanf("%f",&N1);

    DOBRO=(N1*2);

    printf("O dobro de %f eh igual a %f",N1,DOBRO);
    return 0;
}
