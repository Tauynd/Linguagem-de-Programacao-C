/*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = π * raio2
 * altura,
em que π = 3.141592*/

#include<stdio.h>
int main (){

    float alt,raio,volume;

    alt=100;
    raio=50;

    volume=3.14*(raio*raio)*alt;

    printf("O volume eh igual a %0.2f",volume);

    return 0;
}