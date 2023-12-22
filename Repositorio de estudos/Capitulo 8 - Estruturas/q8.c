/*Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Agora, escreva um programa que leia os dados de seis pessoas. Calcule e
exiba os nomes da pessoa mais nova e da mais velha.*/

#include<stdio.h>
#include<string.h>

    struct nascimento {
        int dia;
        int mes;
        int ano;
    };

    struct pessoa{
        char nome[50];
        struct nascimento dn;
    };
    
int main (){

    struct pessoa dados [6];
    int i;
    int mdia=0,mmes=0,mano=0;
    int pdia=0,pmes=0,pano=0;
    char pnome[50]={0},mnome[50]={0};

    for (i = 0; i < 6; i++){
        printf("\nDigite o nome da pessoa (%d): ",i);
        scanf("%s",&dados[i].nome);

        printf("No formato dd/mm/aaaa, digite o nascimento da pessoa (%d): ",i);
        scanf("%d/%d/%d", &dados[i].dn.dia, &dados[i].dn.mes, &dados[i].dn.ano);
            if (dados[i].dn.ano >= mano && dados[i].dn.mes >= mmes && dados[i].dn.dia >= mdia) {
                mano=dados[i].dn.ano;
                mmes=dados[i].dn.mes;
                mdia=dados[i].dn.dia;
                strcpy(mnome, dados[i].nome);
            }
                if (dados[i].dn.ano <= pano && dados[i].dn.mes <= pmes && dados[i].dn.dia <= pdia) {
                    pano=dados[i].dn.ano;
                    pmes=dados[i].dn.mes;
                    pdia=dados[i].dn.dia;
                    strcpy(pnome, dados[i].nome);
                }
    }
    printf("\nA pessoa mais velha eh %s\nA pessoa mais nova eh %s",mnome,pnome);


    return 0;

}