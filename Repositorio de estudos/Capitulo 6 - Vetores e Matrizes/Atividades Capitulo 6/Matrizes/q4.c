/*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores maiores do que 10 ela possui*/

#include<stdio.h>
int main (){

    int i,j,matriz[4][4];
    int maior,contador=0;

    printf("Digite o valor para a matriz [0][0]: ");
    scanf("%d",&matriz[0][0]);

    maior=matriz[0][0];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Digite o valor para a matriz [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
                if (matriz[i][j]>10){
                    maior=matriz[i][j];
                    contador++;
                }
        }
    }
    printf("\nEsta eh a sua matriz:\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nForam digitados %d valores maiores que 10\n",contador);
    return 0;
}