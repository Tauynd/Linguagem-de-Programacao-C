//Calcular e apresentar o valor do volume de uma lata de óleo
#include <stdio.h>
#include <math.h>
int main (){
    float pi=3.14;
    float volume, raio, altura;

    printf("Digite o raio da lata de oleo\n");
    scanf("%f",&raio);

    printf("Digite a altura da lata de oleo\n");
    scanf("%f",&altura);

    volume=pi*pow(raio,2)*altura;

    printf("\nO volume da lata de oleo eh igual a %0.2f",volume);

    return 0;
}