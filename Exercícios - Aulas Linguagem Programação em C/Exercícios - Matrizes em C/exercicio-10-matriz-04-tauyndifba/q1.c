#include <stdio.h>
// Faça um programa que permita ao usuário entrar com uma matriz de tamanho `3  × 3` de números inteiros. 
// Em seguida, calcule um vetor contendo três posições, em  que cada posição deverá armazenar a soma dos números de cada coluna da matriz.  
// Exiba na tela esse array. Por exemplo, a matriz

#include <stdio.h>

int main() {
    int matriz[3][3];
    int array[3];
    int somaColunas = 0;
    int i,j;

//Entrada da matriz
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Informe o numero da posicao %dx%d: ", i+1, j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n");

//Exibindo a matriz
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

//Exibindo e armazenando os valores do array
    printf("Soma das colunas: [ ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            somaColunas += matriz[j][i];
        }
        array[i] = somaColunas;
        somaColunas = 0;
        printf("%d ",array[i]);
    }
    printf("]");

    return 0;
}