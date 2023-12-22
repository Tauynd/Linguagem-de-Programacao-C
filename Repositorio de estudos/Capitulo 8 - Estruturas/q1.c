/*) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da
estrutura lida.*/

#include <stdio.h>

struct dados{
    char nome[50];
    int idade;
    char end[50];
};

int main(){

    struct dados teste;
        printf("Digite o nome: ");
        scanf("%s", &teste.nome);

        printf("Digite a idade: ");
        scanf("%d", &teste.idade);

        printf("Digite o endereco: ");
        scanf("%s", &teste.end);

    printf("\nEstes sao os dados:\n");
    printf("%s\n",teste.nome);
    printf("%d\n",teste.idade);
    printf("%s\n",teste.end);

    return 0;
}
