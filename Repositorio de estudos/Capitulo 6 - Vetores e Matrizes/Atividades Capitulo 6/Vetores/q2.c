/* Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.*/

#include<stdio.h>
int main (){

    int i, lista[6];

    for (i = 0; i < 6; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &lista[i]);
    }
    printf("Os numeros digitados na ordem inversa sao: ");

    for (i = 5; i >= 0; i--){
        printf("|%d| ", lista[i]);
    }
    
    

    return 0;

}