/*Crie uma função recursiva que receba um número inteiro N e 
imprima todos os números naturais de 0 até N em ordem crescente.*/


#include<stdio.h>

int ListaNumeros (int n){
    if (n>0){
        ListaNumeros(n-1);
    }printf("%d\n",n);
}

int main (){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    ListaNumeros(n);

    return 0;

}