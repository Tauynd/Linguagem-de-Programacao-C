/*Faça um programa que informe o mês de acordo com o número digitado pelo
usuário. Exemplo: Entrada = 4. Saída = Abril.
*/

#include<stdio.h>
int main (){

    int mes;

    printf("Digite a opcao desejada:\n1 PARA JANEIRO\n2 PARA FEVEIREIRO\n3 PARA MARCO\n4 PARA ABRIL\n5 PARA MAIO\n6 PARA JUNHO\n7 PARA JULHO\n8 PARA AGOSTO\n9 PARA SETEMBRO\n10 PARA OUTUBRO\n11 PARA NOVEMBRO\n12 PARA DEZEMBRO");
    scanf("%d", &mes);

    switch (mes){
    case 1:
        printf("O mes selecionado eh JANEIRO\n");
        break;
    case 2:
        printf("O mes selecionado eh FEVEREIRO\n");
        break;
    case 3:
        printf("O mes selecionado eh MARCO\n");
        break;
    case 4:
        printf("O mes selecionado eh ABRIL\n");
        break;
    case 5:
        printf("O mes selecionado eh MAIO\n");
        break;
    case 6:
        printf("O mes selecionado eh JUNHO\n");
        break;
    case 7:
        printf("O mes selecionado eh JULHO\n");
        break;
    case 8:
        printf("O mes selecionado eh AGOSTO\n");
        break;
    case 9:
        printf("O mes selecionado eh SETEMBRO\n");
        break;
    case 10:
        printf("O mes selecionado eh OUTUBRO\n");
        break;
    case 11:
        printf("O mes selecionado eh NOVEMBRO\n");
        break;
    case 12:
        printf("O mes selecionado eh DEZEMBRO\n");
        break;
    default:
    printf("Opcao invalida");
        break;
    }

    return 0;

}