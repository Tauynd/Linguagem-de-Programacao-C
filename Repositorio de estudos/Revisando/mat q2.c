/*Faça um programa que leia uma matriz de tamanho 4 × 4. 
Imprima na tela o maior valor contido nessa matriz e a sua localização (linha e coluna).*/

#include<stdio.h>

int main (){

    int matriz[4][4];
    int maior,loci,locj;

    printf("Digite o valor da posicao (0,0): ");
    scanf("%d",&matriz[0][0]);
    maior=matriz[0][0];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i!=0 || j!=0){
            printf("Digite o valor da posicao (%d,%d): ",i,j);
            scanf("%d",&matriz[i][j]);
            if (matriz[i][j]>maior){
                maior=matriz[i][j];
                loci=i;
                locj=j;
            }            
        }
    }
    }
    printf("O maior valor da matriz eh %d e esta localizado na posicao (%d,%d)",maior,loci,locj);

    return 0;
}