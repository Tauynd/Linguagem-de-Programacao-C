/*Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = abril.*/

#include<stdio.h>

void mes (int a){
    printf("\n");
    switch (a){
    case 1:
        printf("O mes de JANEIRO tem 31 dias");
        break;
    case 2:
        printf("O mes de FEVEREIRO tem 28 dias");
        break;
    case 3:
        printf("O mes de MARCO tem 31 dias");
        break;
    case 4:
        printf("O mes de ABRIL tem 30 dias");
        break;
    case 5:
        printf("O mes de MAIO tem 31 dias");
        break;
    case 6:
        printf("O mes de JUNHO tem 30 dias");
        break;
    case 7:
        printf("O mes de JULHO tem 31 dias");
        break;
    case 8:
        printf("O mes de AGOSTO tem 31 dias");
        break;
    case 9:
        printf("O mes de SETEMBRO tem 30 dias");
        break;
    case 10:
        printf("O mes de OUTUBRO tem 31 dias");
        break;
    case 11:
        printf("O mes de NOVEMBRO tem 30 dias");
        break;
    case 12:
        printf("O mes de DEZEMBRO tem 31 dias");
        break;
    default:
        printf("Numero invalido");
        break;
    }
}

int main (){

    int a;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &a);

    mes(a);

}