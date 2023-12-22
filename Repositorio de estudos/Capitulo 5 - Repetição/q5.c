//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>
int main (){
    int num,contador,numPares, sumNumPares;
    numPares = 2;
    sumNumPares = 0;

    for (contador = 0; contador<50; contador++){
        sumNumPares += numPares;
        printf("\n%d ----%d",numPares, sumNumPares);
        numPares += 2;
        }       
    return 0;
}