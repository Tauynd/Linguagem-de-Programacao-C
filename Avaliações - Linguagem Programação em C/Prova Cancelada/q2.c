/*Defina uma estrutura chamada "Pessoa" com os campos nome, idade e altura. Leia e armazene os dados de cinco pessoas em um vetor e exiba o nome das pessoas da mais alta para a mais baixa.*/

#include<stdio.h>

struct pessoa{
  char nome[50];
  int idade;
  int altura;
};


int main (){

  struct pessoa p[5];
  int i,j;

  for (i = 0; i < 5; i++){
    printf("Digite o nome da pessoa (%d): ", i+1);
    scanf("%s",p[i].nome);

    printf("Digite a idade da pessoa (%d): ", i+1);
    scanf("%d",&p[i].idade);

    printf("Digite a altura da pessoa (%d): ", i+1);
    scanf("%d",&p[i].altura);

  }
  

  for (i = 0; i < 5; i++){
    for (j = i+1; j < 5; j++){
      if (p[j].altura>p[i].altura){
        struct pessoa temp; 
        temp.altura=p[j].altura;
        temp.idade=p[j].idade;
        strcpy(temp.nome, p[j].nome);

        p[j].altura=p[i].altura;
        p[j].idade=p[i].idade;
        strcpy(p[j].nome, p[i].nome);

        p[i].altura=temp.altura;
        p[i].idade=temp.idade;
        strcpy(p[i].nome, temp.nome);
      }
      
    }
    
  }
  printf("Lista de pessoas em ordem decrescente de altura:\n");

  for (i = 0; i < 5; i++){
    printf("%d - %s \n", p[i].altura,p[i].nome);
  }

  return 0;
}