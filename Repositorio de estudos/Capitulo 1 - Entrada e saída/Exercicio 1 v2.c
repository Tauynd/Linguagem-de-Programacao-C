#include <stdio.h>
#include <math.h>
int main (){
    float pi=3.14159;
    float raio,area;

    printf("Digite o valor do raio da circunferencia\n");
    scanf("%f",&raio);

    area=pi*pow(raio,2);//pow é uma funcao para calculo de raiz quadrada automático onde primeiro é a variavel do valor e depois a potencia

    printf("\nO resultado da area da circunferencia eh igual a %0.2f",area);

    return 0;
}