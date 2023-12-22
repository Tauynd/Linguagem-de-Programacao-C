/*Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
s=1³+2³+3³...n³
*/

#include <stdio.h>
#include <math.h>

double NCubos (int n){
    double SomaCubo;
    if (n==0){
        return 0;
    }else if (n==1){
        return 1;
    }else {
        SomaCubo = (pow(n,3)+NCubos(n-1));
    } 
    return SomaCubo;
}

int main (){
    double resultado;

    resultado=NCubos(5);

    printf("A soma dos numeros eh: %0.2f\n",resultado);

    return 0;
}