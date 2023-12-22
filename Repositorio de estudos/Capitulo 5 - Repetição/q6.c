//Faça um programa que mostre uma contagem regressiva na tela, 
//iniciando em 10 e terminando em 0. Mostre uma mensagem "FIM!" após a contagem.

#include <stdio.h>
int main (){
    int contador=10;

    for (contador = 10; contador >=0 ; contador--){
        printf("\n%d",contador);
    }
    printf("\nFIM!");
    return 0;
}