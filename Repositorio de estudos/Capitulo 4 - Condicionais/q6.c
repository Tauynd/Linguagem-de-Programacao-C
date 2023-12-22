/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

#include<stdio.h>
int main (){

    int sexo;
    float altura,peso;

    printf("Digite uma das opcoes abaixo\n1 para Homem\n2 para mulher\n");
    scanf("%d", &sexo);

    printf("Digite sua altura: ");
    scanf("%f",&altura);

    if (sexo==1){
        peso=(72.7*altura)-58;
        printf("Seu peso ideal eh %0.2fKg\n",peso);
    }else if (sexo==2){
        peso=(62.1*altura)-44.7;
        printf("Seu peso ideal eh %0.2fKg\n",peso);
    }else
        printf("Digite uma opcao valida");
    
    return 0;

}