#include <stdio.h>
#include <stdlib.h>
int main(){
 float vetor[3] = {1.5,22.1,4.56};
 int matriz1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
 int matriz2[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
 system("pause");
 return 0;
}

/*Na primeira matriz (matriz1), os valores iniciais são definidos utilizando um
único par de chaves ({ }), igual ao que é feito com o array vetor. Nesse caso, os
valores são atribuídos partindo da primeira para a última linha, e somente se
muda de linha quando todas as colunas daquela linha já estiverem com um valor
atribuído a si (começando da primeira coluna).

Na segunda matriz (matriz2), usamos mais de um par de chaves ({ }) para definir o conjunto 
de valores de cada uma das dimensões da matriz
*/