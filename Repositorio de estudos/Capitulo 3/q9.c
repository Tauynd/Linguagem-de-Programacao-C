/* Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π =
3.141592.*/

#include <stdio.h>
int main (){

    float graus,radianos;

    graus=50;

    radianos=(graus*3.14)/180;

    printf("O angulo em radianos eh igual a %0.2f",radianos);
    
    return 0;
}