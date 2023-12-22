#include <stdio.h>
//Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
/// For maior que 20\% do salário, imprima: "Empréstimo não concedido."
/// Caso contrário, imprima: "Empréstimo concedido."

int main (){
  float salario, prestacao;

  printf("Digite o valor do salario\n");
  scanf ("%f", &salario);
  
  printf("Digite o valor da prestacao\n");
  scanf("%f", &prestacao);

  if (prestacao > (salario * 0.20)){
    printf("Emprestimo nao concedido");
    }else{
      printf("Emprestimo concedido");
    }
  return 0;
}