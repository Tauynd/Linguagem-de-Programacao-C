/*Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).*/

#include<stdio.h>
int main (){

    int i,j,matriz[4][4];
    int maior,Imaior,Jmaior;


    printf("Digite o valor para a matriz [0][0]: ");
    scanf("%d",&matriz[0][0]);

    maior=matriz[0][0];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (i!=0 || j!=0){
                printf("Digite o valor para a matriz [%d][%d]: ",i,j);
                scanf("%d",&matriz[i][j]);
                    if (matriz[i][j]>maior){
                    maior=matriz[i][j];
                    Imaior=i;
                    Jmaior=j;
                    }
            }
        }
    }
    
    printf("O maior valor dessa matriz esta na posicao [%d][%d] e eh igual a %d\n",Imaior,Jmaior,maior);

    return 0;
}