#include <stdio.h>
//Escreva um programa que receba dois números e
//mostre a soma, a subtração, a multiplicação e a divisão 
//desses números
int main() {
    float N1,N2,SOMA, SUB, MULT;
    float DIV;

    printf("Digite o primeiro numero\n");
    scanf("%f", &N1);

    printf("Digite o segundo numero\n");
    scanf("%f", &N2);

    SOMA=(N1+N2);
    SUB=(N1-N2);
    MULT=(N1*N2);
    DIV=(N1/N2);

    printf("O resultado da soma eh igual a %f\n",SOMA);
    printf("O resultado da subtracao eh igual a %f\n",SUB);
    printf("O resultado da multiplicacao eh igual a %f\n",MULT);
    printf("O resultado da divisao eh igual a %f\n",DIV);
    return 0;
}