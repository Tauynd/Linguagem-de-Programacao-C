/*3- Defina uma estrutura chamada "Data" com os campos dia, mês e ano, crie uma função que receba uma variável 
dessa estrutura representando uma data e verifique se a data é válida.
    Uma data é válida se:
        O mês está entre 1 e 12.
        O ano é um número positivo.
        O dia está dentro do intervalo válido para o mês (31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)*/

#include <stdio.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

int DataValida(struct Data d){
    if (d.mes < 1 || d.mes > 12 || d.ano < 0)
    return 0;

    int MaiorDia;

    switch (d.mes){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        MaiorDia=31;
        break;
    case 2: 
        MaiorDia=28;
        break;
    case 4: case 6: case 9: case 11:
        MaiorDia=30;
    default:
        return 0;
        break;
    }
    return (d.dia >=1 && d.dia <= MaiorDia);
}

int main (){

    struct Data d;

    printf ("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);

    if (DataValida(d))
        printf("A data informada eh valida.\n");
    else
        printf("A data informada e invalida.\n");
    


    return 0;
}