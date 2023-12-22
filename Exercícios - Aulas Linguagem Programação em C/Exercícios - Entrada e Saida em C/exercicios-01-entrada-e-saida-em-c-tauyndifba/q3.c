#include <stdio.h>
////Dadas as medidas de uma sala, informe sua área

int main() {
    float LAR,COMP,AREA;
    
    printf("Digite a largura da sala\n");
    scanf("%f", &LAR);

    printf("Digite o comprimento da sala\n");
    scanf("%f", &COMP);

    AREA=(LAR*COMP);
    
    printf("A area da sala eh igual a %f",AREA);
    return 0;
}