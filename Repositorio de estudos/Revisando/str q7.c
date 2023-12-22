/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/

#include<stdio.h>

struct Hora{
    int hr;
    int min;
    int seg;
};

int main (){
    struct Hora vetor[5];
    int mhr, mmi, mse;

    printf("Digite a hora no formato hr:min:seg: ");
    scanf("%d:%d:%d", &vetor[0].hr,&vetor[0].min,&vetor[0].seg);
    mhr=vetor[0].hr;
    mmi=vetor[0].min;
    mse=vetor[0].seg;

    for (int i = 0; i < 5; i++){
        printf("Digite a hora no formato hr:min:seg: ");
        scanf("%d:%d:%d", &vetor[i].hr,&vetor[i].min,&vetor[i].seg);
        if (vetor[i].hr >= mhr && vetor[i].min >=mmi && vetor[i].seg > mse){
            mhr=vetor[i].hr;
            mmi=vetor[i].min;
            mse=vetor[i].seg;
        }
    }printf("A maior hora eh: %d:%d:%d",mhr,mmi,mse);
    

return 0;
}