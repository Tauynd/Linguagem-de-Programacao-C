/* Faça um algoritmo que leia um número positivo e imprima seus divisores. 
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/


#include<stdio.h>
int main(){

    int i,num,divisores;

    printf("Digite um numero positivo\n");
    scanf("%d",&num);

    printf("Os divisores de %d sao: \n",num);

    i=0;

    while (i<num){
        i++;
        if (num%i==0){
            divisores=i;
            printf("%d\n",divisores);
        }
        
    }
    

    return 0;
}