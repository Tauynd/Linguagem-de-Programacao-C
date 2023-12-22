//Algoritmo:
//Ler a variável HT (horas trabalhadas no mês);
//Ler a variável VH (valor hora-aula);
//Ler a variável PD (percentual de desconto);
//Calcular o salário bruto (SB), sendo este a multiplicação das variáveis HT e VH;
//Calcular o total de desconto (TD), com base no valor de PD dividido por 100;
//Calcular o salário líquido (SL), deduzindo o desconto do salário bruto;
//Apresentar os valores dos salários bruto e líquido: SB e SL.

#include <stdio.h>
int main (){
    float HT,VH,PD,SB,TD,SL;

    printf("Digite o total de horas trabalhadas no mes\n");
    scanf("%f",&HT);

    printf("Digite o valor da hora aula\n");
    scanf("%f",&VH);

    printf("Digite o percentual de desconto\n");
    scanf("%f",&PD);

    SB=HT*VH;

    TD=PD/100;

    SL=SB-(SB*TD);

    printf("\nSalario bruto eh igual a R$%0.2f\nSalario liquido eh igual a R$%0.2f", SB,SL);

    return 0;
}