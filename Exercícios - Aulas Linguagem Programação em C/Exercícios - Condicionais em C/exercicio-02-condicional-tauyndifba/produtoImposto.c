//Uma empresa vende o mesmo produto para quatro diferentes estados. 
//Cada estado possui uma taxa diferente de imposto sobre o produto. 
// Faça um programa em que o usuário entre com o valor e o estado de destino do produto e 
//o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. 
//Se o estado digitado não for válido, mostrará uma mensagem de erro.

#include <stdio.h>

int main (){
    int valor, estado;
    float produto;

    printf("Digite o valor do produto\n");
    scanf("%d", &valor);

    printf("\nDigite\n 1 para MG\n 2 para SP\n 3 para RJ\n 4 para MS\n");
    scanf ("%d", &estado);

    switch (estado)
    {
    case 1:
        produto = (valor*0.07)+valor;
        printf("\nO valor do produto nesse estado eh R$%0.2f\n", produto);
        break;
    case 2:
        produto = (valor*0.12)+valor;
        printf("\nO valor do produto nesse estado eh R$%0.2f\n", produto);
        break;
    case 3:
        produto = (valor*0.15)+valor;
        printf("\nO valor do produto nesse estado eh R$%0.2f\n", produto);
        break;
    case 4:
        produto = (valor*0.08)+valor;
        printf("\nO valor do produto nesse estado eh R$%0.2f\n", produto);
        break;    
    default:
        printf("\nO valor digitado eh invalido\n");
        break;
    }   
return 0;
}