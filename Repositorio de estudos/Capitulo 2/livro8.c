/*Faça um programa que leia dois números inteiros e depois os imprima na ordem
inversa em que eles foram lidos.*/

#include <stdio.h>
int main (){
    int x,y;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &x,&y);

    printf("%d, %d", y, x);

    return 0;
}