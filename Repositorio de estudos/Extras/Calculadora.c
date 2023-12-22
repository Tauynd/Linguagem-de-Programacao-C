#include <stdio.h>
int main (){
    float num1,num2,res;
    int op;

    printf("Digite a operacao desejada:\n1- Adicao\n2- Subtracao\n3-Multiplicacao\n4-Divisao\n\n-> ");
    scanf("%d",&op);

    printf("\nDigite o primeiro numero: ");
    scanf("%f",&num1);

    printf("\nDigite o segundo numero: ");
    scanf("%f",&num2);

    switch (op){
    case 1:
        res=num1+num2;
        printf("\nO resultado eh igual a %0.2f",res);
        break;
    case 2:
        res=num1-num2;
        printf("\nO resultado eh igual a %0.2f",res);
        break;
    case 3:
        res=num1*num2;
        printf("\nO resultado eh igual a %0.2f",res);
        break;
    case 4:
        res=num1/num2;
        printf("\nO resultado eh igual a %0.2f",res);
        break;
    default:
        printf("\nOpcao invalida");
    }

    return 0;
}