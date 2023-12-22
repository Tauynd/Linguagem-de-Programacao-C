/*Crie uma função recursiva que receba um número inteiro N 
e imprima todos os números naturais de 0 até N em ordem decrescente.*/

#include<stdio.h>

int ImprimeNumeros (int n){
    if (n>=0){
        printf("%d\n",n);
        ImprimeNumeros(n-1);
    }
}

int main (){
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    ImprimeNumeros(n);

    return 0;

}