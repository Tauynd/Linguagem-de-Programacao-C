#include <stdio.h>
int main (){
    float pi=3.14159;
    float raio,area;

    printf("Digite o valor do raio da circunferencia\n");
    scanf("%f",&raio);

    area=pi*(raio*raio);

    printf("\nO resultado da area da circunferencia eh igual a %0.2f",area);

    return 0;
}