/*Nesse exemplo, a função imprime apenas imprimirá uma mensagem na tela n vezes.
Não há o que devolver para a função main(). Portanto, podemos declará-la como void*/

#include <stdio.h>
#include <stdlib.h>
void imprime(int n){
 int i;
 for (i=1; i<=n; i++)
 printf("Linha %d \n",i);
}
int main(){
 imprime(5);
 system("pause");
 return 0;
}