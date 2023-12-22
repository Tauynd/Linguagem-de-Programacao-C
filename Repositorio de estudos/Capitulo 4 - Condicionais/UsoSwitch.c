#include <stdio.h>
int main(){
    int opcao;

    printf("Digite a opcao desejada entre 1 e 4\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Opcao 1 selecionada\n");
        break;
    case 2:
        printf("Opcao 2 selecionada\n");
        break;
    case 3:
        printf("Opcao 3 selecionada\n");
        break;
    case 4:
        printf("Encerrar programa\n");
        break;
    default:
        printf("Opcao invalida\n");
    }
    return 0;
}