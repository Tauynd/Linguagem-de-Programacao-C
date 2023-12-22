#include <stdio.h>
//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

int main(){

    int CONTADOR;
    int SOMA=0;
    
        
    for (CONTADOR=0; CONTADOR<=100;CONTADOR=CONTADOR+2){
        SOMA+=CONTADOR;       
        printf("%d, a soma atual eh igual a %d\n",CONTADOR,SOMA);
        
    }
      
    return 0;
}