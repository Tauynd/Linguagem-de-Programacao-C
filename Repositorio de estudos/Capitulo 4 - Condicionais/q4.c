/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

#include<stdio.h>
int main (){

    float sal,prest;

    printf("Digite o valor do salario: ");
    scanf("%f", &sal);

    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f",&prest);

    if (prest>(sal*0.2)){
        printf("Emprestimo nao concedido\n");
    }else
        printf("Emprestimo concedido");
    

    return 0;
}