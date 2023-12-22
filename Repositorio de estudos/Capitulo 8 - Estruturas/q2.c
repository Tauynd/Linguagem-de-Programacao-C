/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).*/

#include<stdio.h>

    struct coord {
        int x;
        int y;
    };

    int main (){

        struct coord origem ={0,0};
        
        struct coord ponto;
            printf("Digite o ponto (x): ");
            scanf("%d",&ponto.x);

            printf("Digite o ponto (y): ");
            scanf("%d",&ponto.y);

        float distancia = ((ponto.x - origem.x) * (ponto.x - origem.x)) + ((ponto.y - origem.y) * (ponto.y - origem.y));

        printf("A distancia entre os pontos eh igual a %0.2f\n",distancia);

        return 0;
    }
    