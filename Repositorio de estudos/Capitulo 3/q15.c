/* Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado pelos dígitos invertidos do número lido.
Exemplo:
Número lido = 123
Número gerado = 321
*/

#include<stdio.h>
int main(){

    int num,cen,dez,und;

    printf("Digite um numero positivo com 3 digitos: ");
    scanf("%d",&num);

    cen=num/100;   /*DIVISAO INTEIRA DE 123 POR 100 = 1*/
    dez=(num%100)/10;   /*RESTO DA DIVISAO DE 123 POR 100= 23 ... DIVISAO INTEIRA DE 23 POR 10 = 2*/
    und=(num%100)%10; /*RESTO DA DIVISAO DE 123 POR 100 =23 ... RESTO DA DIVISAO DE 23 POR 10= 3*/

    printf("Num lido: %d\nNum invertido: %d%d%d",num,und,dez,cen);

    return 0;
}