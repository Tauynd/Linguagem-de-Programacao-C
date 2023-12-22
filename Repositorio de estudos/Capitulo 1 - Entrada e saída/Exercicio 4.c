#include <stdio.h>
int main (){
    float CS,FH;

    printf("Digite a temperatura em Fahrenheit\n");
    scanf("%f",&FH);

    CS=((FH-32)*5/9);

    printf("\nA temperatura em Celsius eh igual a %0.2f",CS);

    return 0;
}