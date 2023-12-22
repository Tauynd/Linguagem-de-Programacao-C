/*zerando um vetor para iniciar o programa sem lixo de memória*/

#include <stdio.h>
#include <stdlib.h>
int main(){
 int vet[5];
 int i;
 for (i = 0; i < 5; i++){
 vet[i] = 0;  //neste momento estamos iniciando o vetor com todas as posições zeradas
 }
 system("pause");
 return 0;
}