/*Leia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) +
32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>
int main (){

    float cs, fh;

    cs=29;

    fh=cs*(9.0/5.0)+32;

    printf("A temperatura em fahrenheit eh igual a %0.2f",fh);

    return 0;
}