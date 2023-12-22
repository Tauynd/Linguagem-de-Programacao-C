#include <stdio.h>
//Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

int main (){

  int N1;

  printf("Digite um numero inteiro\n");
  scanf("%d", &N1);

  if (N1%2==0){
    printf("O numero %d eh par", N1);  
  }else{
    printf("O numero %d eh impar", N1);
  }
  return 0;
}
