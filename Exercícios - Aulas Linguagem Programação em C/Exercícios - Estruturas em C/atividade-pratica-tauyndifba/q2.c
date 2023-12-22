#include <stdio.h>
//Defina uma estrutura chamada "Pessoa" com os campos nome, idade e altura.
//Leia e armazene os dados de cinco pessoas em um vetor e
//exiba o nome das pessoas da mais alta para a mais baixa.

struct pessoa{
    char nome[50];
    int idade;
    int altura;
};

int main() {
    int i;
    struct pessoa p [2];
    int maior=0,menor=0;


    for (i = 0; i < 2; i++){
        printf("Digite o nome da pessoa (%d): ",i);
        scanf("%s",&p[i].nome);

        printf("Digite a idade da pessoa (%d): ",i);
        scanf("%d",&p[i].idade);

        printf("Digite a altura da pessoa (%d): ",i);
        scanf("%d",&p[i].altura);

            if (p[i].altura>maior){
                maior=p[i].altura;
            }

            if (p[i].altura<maior){
                menor=p[i].altura;
            }
    }

    for (i=0; i<2 ; i++){
        printf("Pessoa %d tem altura %d\n",i,p[i].altura);
    }

    printf("A maior altura eh %d\nA menor altura eh %d\n",maior,menor);

    return 0;
    
}
