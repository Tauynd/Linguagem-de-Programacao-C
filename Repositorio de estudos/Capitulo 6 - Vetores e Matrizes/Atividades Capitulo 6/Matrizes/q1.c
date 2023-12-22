/*Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz*/

#include<stdio.h>
int main (){

    int i,j,matriz[3][3];
    int menor;

    printf("Digite um valor da matriz [0][0]: ");
    scanf("%d",&matriz[0][0]);
    
    menor=matriz[0][0];
    
    for (i = 0 ; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (i!=0 || j!=0){
                printf("Digite um valor da matriz [%d][%d]: ",i,j);
                scanf("%d",&matriz[i][j]);
                    if (matriz[i][j]<menor){
                    menor=matriz[i][j];
                    }
            }
        }
    }

    printf("O menor valor da matriz eh igual a %d",menor);
    

    return 0;
}