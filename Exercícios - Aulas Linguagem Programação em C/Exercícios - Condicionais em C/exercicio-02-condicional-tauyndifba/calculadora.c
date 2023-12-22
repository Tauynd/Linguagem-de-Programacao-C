//Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas 
//(as operações básicas, por exemplo). O usuário escolhe uma das opções, 
//e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.

#include <stdio.h>

int main(){
    int operacao;
    float valor1, valor2,resultado;

    printf("Digite\n 1 para Adicao\n 2 para Subtracao\n 3 para Multiplicacao\n 4 para Divisao\n");
    scanf("%d", &operacao);

    printf("Digite o primeiro valor a ser calculado\n");
    scanf("%f", &valor1);

    printf("Digite o segundo valor a ser calculado\n");
    scanf("%f", &valor2);

    switch (operacao){
    case 1:
        resultado = valor1 + valor2;
        printf("O resultado da adicao eh igual a %0.2f", resultado);
        break;
    case 2:
        resultado = valor1 - valor2;
        printf("O resultado da subtracao eh igual a %0.2f", resultado);
        break;
    case 3:
        resultado = valor1 * valor2;
        printf("O resultado da multiplicao eh igual a %0.2f", resultado);
        break;
    case 4:
        resultado = valor1 / valor2;
        printf("O resultado da adicao eh igual a %0.2f", resultado);
        break;
    default:
        printf("Voce digitou uma opcao invalida para a operacao. Tente novamente");
        break;
    }


    return 0;
}