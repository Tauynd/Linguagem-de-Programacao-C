//Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo
//ou seja, o programa deverá apresentar o módulo de um número fornecido. 
//Lembre-se de verificar se o número fornecido é menor que zero; sendo, multiplique-o por -1

#include <stdio.h>
int main (){
    int num,x;

    printf("Digite um numero inteiro, positivo ou negativo: ");
    scanf("%d",&num);

    if (num<0){
        x=(num*(-1));
        printf("\nO modulo do numero %d eh igual a %d",num,x);
    }else{
        printf("\nO modulo do numero %d eh igual a %d",num,num);
    }
        
    return 0;
}