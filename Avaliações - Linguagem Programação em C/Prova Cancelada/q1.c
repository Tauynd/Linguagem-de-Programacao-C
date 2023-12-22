/*Escreva uma função que receba dois valores inteiros e os inverta entre si usando ponteiros.*/

#include<stdio.h>

void invert (int *a, int *b){
  int temp; 
  temp = *a;
  *a = *b;
  *b = temp;
return (*a,*b);
}

int main (){

  int x,y;

  printf("Digite um valor inteiro para x e y: ");
  scanf("%d,%d",&x,&y);

  invert(&x,&y);
  
  printf("Os valores invertidos sao: %d e %d",x,y);



  return 0;
}



