/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior
valor lido*/

#include<stdio.h>
int main(){

    int i,num,maior,menor;

    printf("Digite um numero\n");
    scanf("%d",&num);

    maior=num;
    menor=num;

    for (i = 0; i < 9; i++){
        printf("Digite um numero\n");
        scanf("%d",&num);

        if (num>maior){
            maior=num;
        }else if(num<menor){
            menor=num;
        }
    
    }

    printf("Maior numero = %d\nMenor numero = %d\n",maior, menor);
    

    return 0;
}