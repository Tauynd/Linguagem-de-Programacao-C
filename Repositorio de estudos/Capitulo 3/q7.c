/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares.*/

#include <stdio.h>
int main (){

    float real, cotacao, dolar;

    real=4.50;
    cotacao=5.59;

    dolar= real*cotacao;

    printf("O valor correspondente em dolares eh igual a %0.2f",dolar);
    
    return 0;
}