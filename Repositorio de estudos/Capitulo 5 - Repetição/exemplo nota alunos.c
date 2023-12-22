#include <stdio.h>
int main(){
  
  float nota1, nota2, media;
  int contador;
  
  printf("---- Calculando a media para 10 alunos -----\n\n");
  
  //Entrada de dados
  for (contador = 1; contador<=10; contador++)
  {
    printf("Digite a primeira nota do aluno %d\n",contador);
    scanf("%f",&nota1);
  
    printf("Digite a segunda nota do aluno %d\n",contador);
    scanf("%f",&nota2);
  
    //Processamento
    media = (nota1 + nota2) / 2;
  
    //Saída
    printf("\nMedia do aluno %d = %.1f\n",contador,media);
    printf("------------------------------------------\n\n");
  }

  return 0;
}