/*Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.*/

#include<stdio.h>

double MediaElementos (int vet[],int tamanho){
    double soma;
    if (tamanho==0){
        return 0;
    }else {
        soma=vet[tamanho-1]+MediaElementos(vet,tamanho-1);
    }
    return soma;
}

int main (){
    int vet[5]={1,2,3,4,5};
    int tamanho=5;
    double resultado;

    resultado=MediaElementos(vet,tamanho)/tamanho;

    printf("A media dos elementos eh igual a %0.2f",resultado);

    return 0;
}