/*Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
s=1^3 + 2^3 + n^3 */

#include <stdio.h>
#include <math.h>

int SomaCubos (int n){
    int soma;
    if (n==0){
        return 0;
    }else if (n==1){
        return 1;    
    }else{
    soma=pow(n,3)+SomaCubos(n-1);
    }
    return soma; 
}

int main (){
    int n, resultado;
    
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    resultado=SomaCubos(n);

    printf("A soma dos (%d) primeiros cubos eh igual a: %d", n, resultado);

    return 0;
}