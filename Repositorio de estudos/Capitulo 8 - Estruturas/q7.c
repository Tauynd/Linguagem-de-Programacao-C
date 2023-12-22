/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/

#include<stdio.h>

    struct campos{
        int hr;
        int min;
        int seg;
    };

int main (){
    
    int i, maiorhr=0, maiormin=0, maiorseg=0;
    struct campos hora [5];

    for (i = 0; i < 5; i++){
        printf("Digite as horas, minutos e segundos (%d): \n",i);
        scanf("%d:%d:%d",&hora[i].hr,&hora[i].min,&hora[i].seg);
            if (hora[i].hr >= maiorhr && hora[i].min>=maiormin && hora[i].seg>=maiorseg){
                maiorhr= hora[i].hr;
                maiormin= hora[i].min;
                maiorseg= hora[i].seg;
            }
    }

    printf("A maior hora digitada foi: %d:%d:%d", maiorhr,maiormin,maiorseg);

    return 0;
}
    