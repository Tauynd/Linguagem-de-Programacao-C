#include <stdio.h>
///Escrever um programa que receba o valor do peso (em quilos) e altura (em metros) 
///de uma pessoa e calcule seu IMC pela fórmula

int main() {
    float PESO,ALTURA,IMC;
    
    printf("Digite o peso\n");
    scanf("%f", &PESO);

    printf("Digite a altura\n");
    scanf("%f", &ALTURA);

    IMC= PESO/(ALTURA*ALTURA);

    if(IMC<17) {
        printf("Muito abaixo do peso\n");
    }

    if(IMC>=17 && IMC<=18.49) {
        printf("Abaixo do peso\n");
    }
    
    if(IMC>=18.5 && IMC<=24.99) {
        printf("Peso normal\n");
    }

    if(IMC>=25 && IMC<=29.99) {
        printf("Acima do peso \n");
    }

    if(IMC>=30 && IMC<=34.99) {
        printf("Obesidade I \n");
    }

    if(IMC>=35 && IMC<=39.99) {
        printf("Obesidade II Severa \n");
    }

    if(IMC>=40) {
        printf("Obesidade III Morbida \n");
    }

    printf("O IMC eh igual a %3.2f",IMC);
    
    return 0;
}