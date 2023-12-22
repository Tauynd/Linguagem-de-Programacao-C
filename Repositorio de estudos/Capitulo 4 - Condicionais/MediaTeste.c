#include <stdio.h>
int main()
{
    float N1, N2, MEDIA;

    printf("Digite a nota 1: ");
    scanf("%f", &N1);

    printf("Digite a nota 2: ");
    scanf("%f", &N2);

    MEDIA = (N1 + N2) / 2;
    printf("Media eh igual a %0.2f\n",MEDIA);

    if (MEDIA>=7){
        printf("Aluno aprovado por media\n");
    }else if (MEDIA>=5){
        printf("Aluno devera realizar recuperacao\n");    
    }else {
        printf("Aluno reprovado\n");
    }
    return 0;
}