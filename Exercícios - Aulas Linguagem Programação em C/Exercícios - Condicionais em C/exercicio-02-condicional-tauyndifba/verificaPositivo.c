#include <stdio.h>
#include <math.h>
//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
///O número digitado ao quadrado.
/// A raiz quadrada do número digitado.

int main (){
  float N1, QUADRADO, RAIZ;

  printf("Digite um numero\n");
  scanf("%f", &N1);

  if (N1 >= 0){
    QUADRADO = pow(N1,2);
    RAIZ = sqrt(N1);
    printf("O numero ao quadrado eh igual a %0.2f\n", QUADRADO);
    printf("O raiz quadrada do numero eh igual a %0.2f\n", RAIZ);
  }else{
    printf("O numero eh negativo");
  }
  
  return 0;
}