/*A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>
int main (){

    float total, win1,win2,win3;

    total=780000;

    win1=(total*0.46);
    win2=(total*0.32);
    win3=total-(win1+win2);

    printf("A quantia recebida pelos 3 ganhadores eh\nGanhador 1: R$%0.2f\nGanhador 2: R$%0.2f\nGanhador 3: R$%0.2f\n",win1,win2,win3);

    return 0;
}