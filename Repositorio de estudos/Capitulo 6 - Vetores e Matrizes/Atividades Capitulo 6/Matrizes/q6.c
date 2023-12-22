/*Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.*/

#include<stdio.h>
int main (){

    int i,j,matriz[3][3];
    int soma=0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o valor para a matriz [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
                if (i==j){
                    soma=soma+matriz[i][j];
                }
        }
    }
    printf("Esta eh a sua matriz:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d ",matriz[i][j]);
        }
    printf("\n");
    }    

    printf("A soma dos valores da diagonal princial eh igual a %d",soma);

    return 0;
}