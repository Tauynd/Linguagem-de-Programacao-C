//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

#include <stdio.h>
int main (){
    int num,contador;

    num=3;

    printf("Estes sao os 5 primeiros multiplos de 3: ");
    for (contador = 0; contador<5 ; contador++){
        printf("\n%d",num);
        num+=3;
    }
    

    return 0; 
}