#include <stdio.h>
//Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que "h" corresponde à altura):
/// Homens: $(72,7 * h) – 58$
/// Mulheres: $(62,1 * h) – 44,7$

int main (){
  float ALTURA,PIDEAL;
  int SEXO;

  printf("Informe a altura\n");
  scanf("%f", &ALTURA);

  printf("Informe o sexo utilizando 1 para feminino e 2 para masculino\n");
  scanf("%d", &SEXO);

  if(SEXO == 2){
    PIDEAL = (72.7 * ALTURA)-58;
    printf("O peso ideal eh igual a %0.2f", PIDEAL);
  } else if (SEXO == 1){
    PIDEAL = (62.1 * ALTURA)-44.7;
    printf("O peso ideal eh igual a %0.2f", PIDEAL);
  } else{
    printf("Sexo invalido");
  }
  

  return 0;
}