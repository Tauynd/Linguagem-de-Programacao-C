#include <stdio.h>
//Escreva uma função que, dado um número real passado como parâmetro, 
//retorne a parte inteira e a parte fracionária desse número por referência

void dividir (float num, int *inteiro, float *decimal){
    *inteiro = num;
    *decimal = (num - *inteiro);
}

int main() {
    float num, decimal;
    int inteiro;

    printf("\nDigite um numero: ");
    scanf("%f", &num);

    dividir (num, &inteiro, &decimal);

    printf("\nA parte inteira do numero %0.2f eh igual a %d e a parte decimal eh igual a %0.2f", num, inteiro, decimal);
    return 0;
}