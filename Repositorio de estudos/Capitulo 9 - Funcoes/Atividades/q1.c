/*Escreva uma função que receba por parâmetro dois números e retorne o maior
deles.*/

#include <stdio.h>

int funcao (int a, int b){
    int maior=0;
    if (a>b){
        maior=a;
    }else if (b>a){
        maior=b;
    }else{
    printf("Os numeros sao iguais");
    }
return maior;
}

int main (){

    int x,y,resultado;

    printf ("Digite dois numeros: ");
    scanf("%d %d", &x,&y);
    resultado = funcao (x,y);

    printf("O maior resultado eh %d",resultado);

}