/*Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit
e a retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) *
(5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include<stdio.h>

float conversao (float fh){
    float C;

    C=(fh-32.0)*(5.0/9.0);

    return C;
}

int main (){

    float fh;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f",&fh);

    conversao (fh);
    printf("A temperatura em Celsius eh igual a %0.2f",conversao(fh));

    return 0;
}