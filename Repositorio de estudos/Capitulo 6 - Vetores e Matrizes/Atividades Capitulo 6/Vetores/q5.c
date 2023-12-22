/*Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.*/

#include<stdio.h>
int main(){

    int i,vetor[8];
    int x,y,soma;

    for (i = 0; i < 8; i++){
        printf("Digite um valor: ");
        scanf("%d",&vetor[i]);
    }
    
    printf("Digite dois valores entre 0 e 7: \n");
    scanf("%d %d",&x,&y);
        if ((x>=0 && x<=7) && (y>=0 && y<=7)){
            soma=vetor[x]+vetor[y];
            printf("A soma das posicoes x e y eh igual a %d",soma);             
        }else
        printf("Valor invalido");
                
    return 0;

}