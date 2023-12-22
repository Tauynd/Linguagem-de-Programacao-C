/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s*/

#include <stdio.h>
int main (){

    float km, ms;

    km=104.4;

    ms=km/36;

    printf("A velocidade em m/s eh igual a %0.2f",ms);

    return 0;
}