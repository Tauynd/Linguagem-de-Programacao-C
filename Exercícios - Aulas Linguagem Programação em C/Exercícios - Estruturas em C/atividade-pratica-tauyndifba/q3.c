#include <stdio.h>
/*
Defina uma estrutura chamada "Data" com os campos dia, mês e ano, crie uma função que
receba uma variável dessa estrutura representando uma data e verifique se a data é válida.

    Uma data é válida se:

    - O mês está entre 1 e 12.
    - O ano é um número positivo.
    - O dia está dentro do intervalo válido para o mês (31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31)
*/

struct data{
    int dia;
    int mes;
    int ano;
};

void datavalida (int dia, int mes, int ano){
    if (dia>=1 && dia<=31){
        if (mes>=1 && mes<=12){
            if (ano>0);
                printf("Data valida");
        }
    }else{
        printf("Data invalida");
    }
}

int main() {

    int d,m,a;
    struct data dt;

    printf("Digite aqui uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dt.dia,&dt.mes,&dt.ano);


    return 0;
}
