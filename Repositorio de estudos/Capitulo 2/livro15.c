/*Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprimaas de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e
uma em cada linha. Use um único comando printf() para cada operação de escrita
das três variáveis.*/

#include <stdio.h>
int main (){

    char x = 'A';
    int y = 10;
    float z = 1.5;

    printf("\n\nESPACOS %c %d %f\n\n",x, y, z);

    printf("PULANDO LINHA\n%c\n%d\n%f\n\n",x,y,z);

    printf("TABULACAO\n%c\t%d\t%f\t",x,y,z);



    return 0;
}