/*Escreva um programa que contenha duas variáveis inteiras. 
Compare seus endereços e exiba o maior endereço.*/

#include<stdio.h>

int main (){

    int a=1, b=2;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("Conteudo do ponteiro de a = %d \nEndereco de a: %d\n\n",*pa,pa);
    printf("Conteudo do ponteiro de b = %d \nEndereco de b: %d\n\n",*pb,pb);

    if (pa > pb){
        printf("O maior endereco eh o da variavel a: %d\n", pa);
        }else if (pb > pa){
            printf("O maior endereco eh o da variavel b: %d\n", pb);
        }else
        printf("Operacao invalida");

    return 0;
}