/*Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = π * raio2
, sendo π = 3.141592.*/

#include <stdio.h>
int main (){

    float raio,area;

    raio=5;

    area=3.14*(raio*raio);

    printf("A area do circulo eh igual a %0.2f",area);


    return 0;

}