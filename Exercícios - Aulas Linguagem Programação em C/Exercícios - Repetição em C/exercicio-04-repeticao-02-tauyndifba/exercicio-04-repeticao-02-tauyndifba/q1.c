#include <stdio.h>
// Faça um programa que pergunte uma operação para ao usuário (multiplicação ou divisão) e dois números inteiros.
// Realize a operação solicitada utilizando apenas soma e subtração.
// No caso da divisão não ser exata o resto deve ser exibido.

int main()
{
    int OP, N1, N2;
    int DIV, MULT, REST;

    printf("\nDigite 1 para multiplicacao e 2 para divisao: ");
    scanf("%d", &OP);

    if (OP== 1 || OP == 2){
        printf("\nInforme um numero inteiro: ");
        scanf("%d", &N1);

        printf("\nInforme outro numero inteiro: ");
        scanf("%d", &N2);

        if (OP == 1){
            MULT = 0;
            for (int i = 1; i <= N2; i++)
            {
                MULT += N1;
            }
            printf("\n -> O resultado da multiplicacao eh igual a %d\n\n", MULT);
        }
        else if (OP == 2){
            if (N2 != 0){
                REST = N1;
                for (int j = 1;; j++){
                    if (REST >= N2){
                        REST -= N2;
                        DIV = j;
                    }else{
                        break;
                    }
                }
                printf("\n -> O resultado da divisao eh igual a %d e o resto da divisao eh igual a %d\n\n", DIV, REST);
            }else{
                printf("Operacao invalida\n");
            }
        }
        
    }else{
            printf("Operacao invalida\n");
        }

    return 0;
}