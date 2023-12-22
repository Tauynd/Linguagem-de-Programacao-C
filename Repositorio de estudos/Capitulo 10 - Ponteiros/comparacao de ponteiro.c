/*Dois ponteiros são considerados iguais se eles apontam para a mesma posição de
memória.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
 int *p, *p1, x, y;
 p = &x;
 p1 = &y;
 if(p == p1)
printf("Ponteiros iguais\n");
 else
printf("Ponteiros diferentes\n");
 system("pause");
 return 0;
}