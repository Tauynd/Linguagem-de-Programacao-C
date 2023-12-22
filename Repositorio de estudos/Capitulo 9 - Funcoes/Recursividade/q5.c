/*Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros*/

#include<stdio.h>

int SomaElementos (int vet[], int tamanho){
    if (tamanho==0){
        return 0;
    }else {
        return vet[tamanho-1]+SomaElementos(vet,tamanho-1);
    }
}

int main (){
    int vet[5]={1,2,3,4,5};
    int resultado, tamanho=5;
    
    resultado=SomaElementos(vet,tamanho);
    printf("A soma dos elementos do vetor eh: %d",resultado);

    return 0;
}