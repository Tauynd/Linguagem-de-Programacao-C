/*mostra uma função que recebe dois parâmetros inteiros e
retorna a sua soma para a função main().

Note, nesse exemplo, que a chamada da função foi feita dentro da função printf().
Isso é possível porque a função retorna um valor inteiro (x + y) e a função printf()
espera imprimir um valor inteiro (%d).*/

#include <stdio.h>
#include <stdlib.h>
int soma(int x, int y){
 return x + y;
}
int main(){
 int a,b,c;
 printf("Digite a: ");
 scanf("%d", &a);
 printf("Digite b: ");
 scanf("%d", &b);
 printf("Soma = %d\n",soma(a,b));
 system("pause");
 return 0;
}