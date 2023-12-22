/*Escreva um programa que contenha duas variáveis inteiras. 
Leia essas variáveis do teclado. Em seguida, compare seus endereços 
e exiba o conteúdo do maior endereço.*/

#include<stdio.h>

int main(){

    int x, y;
    int *px, *py;

    printf("Digite o valor para x: ");
    scanf("%d",&x);

    printf("Digite o valor para y: ");
    scanf("%d",&y);

    px=&x;
    py=&y;

    printf("Valor do ponteiro de x= %d e Endereco de x= %p",*px,px);
    printf("\nValor do ponteiro de y= %d e Endereco de y= %p\n",*py,py);
    

    if (px>py){
        printf("O endereco de x: %p eh maior que o endereco de y: %p",px, py);
    }else if (py>px){
        printf("O endereco de y: %p eh maior que o endereco de x: %p",py, px);
    }

    return 0;
}