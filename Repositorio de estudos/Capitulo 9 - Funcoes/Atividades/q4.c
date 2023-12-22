/*Escreva uma função que receba por parâmetro a altura e o raio de um cilindro
circular e retorne o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = π * raio2 * altura,
em que π = 3.1414592*/

#include <stdio.h>

float volume (float altura, float raio){
    float V;
    V= (3.14 * (raio*raio) * altura);

    return V;

}

int main(){

    float alt, rai, vol;

    printf("Digite a altura e o raio do cilindro: ");
    scanf("%f %f", &alt,&rai);

    vol = volume (alt,rai);

    printf("O volume do cilidro eh igual a %0.2f", vol);


    return 0;
}