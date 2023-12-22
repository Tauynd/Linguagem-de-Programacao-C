/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. 
Faça um programaem que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto 
acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
Estado MG SP RJ MS
Imposto 7% 12% 15% 8%*/

#include<stdio.h>
int main(){

    int uf;
    float produto,valor;

    printf("Digite a opcao desejada:\n1 para MG\n2 para SP\n3 para RJ\n4 para MS\n");
    scanf("%d",&uf);

    printf("Digite o valor do produto: ");
    scanf("%f",&valor);

    switch (uf){
    case 1:
        produto=(valor*0.07)+valor;
        printf("O valor no estado de MG eh %0.2f",produto);
        break;
    case 2:
        produto=(valor*0.12)+valor;
        printf("O valor no estado de MG eh %0.2f",produto);
        break;
    case 3:
        produto=(valor*0.15)+valor;
        printf("O valor no estado de MG eh %0.2f",produto);
        break;
    case 4:
        produto=(valor*0.08)+valor;
        printf("O valor no estado de MG eh %0.2f",produto);
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;

}