/*Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. 
O programa tem de retornar o maior e o menor número lido.*/

#include<stdio.h>
int main(){

    int num,maior,menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
        maior=num;
        menor=num;

    while (num>=0){
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

        if (num>=0){
            if (num>maior){
            maior=num;
            }else if (num<menor){
            menor=num;
        }       
        }
    }
    printf("Maior numero = %d\nMenor numero = %d\n",maior,menor);
    return 0 ;
}