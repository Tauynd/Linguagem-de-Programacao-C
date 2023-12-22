/* Faça um programa que receba do usuário um vetor X com 10 posições. 
Em seguida deverão ser impressos o maior e o menor elemento desse vetor*/

#include<stdio.h>
int main (){

    int i,x[10];
    int maior, menor;

    printf("Digite um valor para o vetor: ");
    scanf("%d",&x[0]);

    maior=x[0];
    menor=x[0];

    for (i = 1; i < 10; i++){
        printf("Digite um valor para o vetor: ");
        scanf("%d",&x[i]);
            if (x[i]>maior){
                maior=x[i];
            }else if (x[i]<menor){
                menor=x[i];
            }
    }printf("Maior numero = %d\nMenor numero = %d\n",maior,menor);
    
    return 0; 

}