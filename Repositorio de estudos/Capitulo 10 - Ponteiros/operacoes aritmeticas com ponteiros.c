/*Sobre o conteúdo apontado pelo ponteiro, valem todas as operações aritméticas que
o tipo do ponteiro suporta.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
 int *p, x = 10;
 p = &x;
 printf("Conteudo apontado por p: %d \n",*p);
 *p = (*p)++;
 printf("Conteudo apontado por p: %d \n",*p);
 *p = (*p) * 10;
 printf("Conteudo apontado por p: %d \n",*p);
 system("pause");
 return 0;
}