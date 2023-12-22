/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles*/

#include<stdio.h>

    struct coord {
        int x;
        int y;
    };
    
int main (){
    
    struct coord ponto[2];
    int i;

    for (i = 0; i < 2; i++){
        printf("Digite a coordenada (x-%d): ",i);
        scanf("%d",&ponto[i].x);

        printf("Digite a coordenada (y-%d): ",i);
        scanf("%d",&ponto[i].y);
    }
    
    printf("\nEste foram os pontos digitados: \n");

    for (i = 0; i < 2; i++){
        printf("|%d,%d| ",ponto[i].x,ponto[i].y);
    }

    return 0;
}