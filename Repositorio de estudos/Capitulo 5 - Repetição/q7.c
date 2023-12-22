/*) Elabore um programa que peça ao usuário para digitar 10 valores. Some esses
valores e apresente o resultado na tela.*/

#include<stdio.h>
int main (){

    int i,num,soma=0;

    for (i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d",&num);
        soma=soma+num;
        
    }printf("A soma eh igual a %d\n",soma);
    
    
    return 0;
}