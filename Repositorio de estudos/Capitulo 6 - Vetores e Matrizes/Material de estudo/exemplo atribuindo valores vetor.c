/*O operador de chaves permite definir uma lista de valores a serem atribuídos ao array
durante a sua declaração: { dados }.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
 int vet[5]={15,12,9,1,35};

 system("pause");
 return 0;
}


/* CASO NÃO USASSE AS CHAVES PARA INDICAR OS VALORES
#include <stdio.h>
#include <stdlib.h>
int main(){
 int vet[5];
 vet[0] = 15;
 vet[1] = 12;
 vet[2] = 9;
 vet[3] = 1;
 vet[4] = 35;
 system(“pause”);
 return 0;
}

*/