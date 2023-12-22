/*Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.*/

#include<stdio.h>
#include<math.h>
int main (){

    float num, raiz;

    printf("Digite um numero: ");
    scanf("%f",&num);

    if (num>=0){
        
        raiz=sqrt(num);
        num*=num;
        
        printf("O numero ao quadrado eh igual a %0.2f\nA raiz do numero eh igual a %0.2f", num,raiz);
    }else
        printf("O numero eh negativo");
    
    return 0;
}