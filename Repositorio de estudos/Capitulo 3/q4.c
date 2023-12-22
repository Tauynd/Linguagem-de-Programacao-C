/* Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores. */

#include<stdio.h>
int main (){

    float num1,num2,num3,num4,media;

    printf("Digite 4 numeros: \n");
    scanf("%f %f %f %f", &num1,&num2,&num3,&num4);

    media = (num1+num2+num3+num4)/4;

    printf("\nA media dos 4 numeros eh igual a %0.2f", media);

    return 0;
}