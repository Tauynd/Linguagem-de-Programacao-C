/* Ponteiros, Estruturas e Alocação Dinâmica (Valor: 50 pontos)

    1. Crie uma estrutura (struct) em C chamada "Ponto" com os campos x e y, ambos do tipo `int`.
    1. Escreva uma função em C chamada "criarPonto" que receba como parâmetros dois valores `int` (x e y) e retorne um ponteiro para uma estrutura "Ponto" alocada 
    dinamicamente com esses valores.
    1. Escreva uma função em C chamada "distanciaPontos" que receba dois ponteiros para estruturas "Ponto" como parâmetros e retorne a area do retângulo formado por esses dois pontos. 
    ![](./img/PlanoCarte.png)
    1. Escreva a função `main` parar criar dois pontos e soliciar o cálculo da área do retângulo como na imagem acima. */

#include <stdio.h>
#include <stdlib.h> // Necessário para alocar memória dinamicamente

struct Ponto {
    int x;
    int y;
};

struct Ponto* criarPonto(int x, int y) {
    struct Ponto* novoPonto = (struct Ponto*)malloc(sizeof(struct Ponto));
    if (novoPonto != NULL) {
        novoPonto->x = x;
        novoPonto->y = y;
    }
    return novoPonto;
}

int areaRetangulo(struct Ponto* ponto1, struct Ponto* ponto2) {
    int base = abs(ponto1->x - ponto2->x);
    int altura = abs(ponto1->y - ponto2->y);
    return base * altura;
}

int main() {
    int x1, y1, x2, y2;

    printf("Digite os valores para x e y do primeiro ponto (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite os valores para x e y do segundo ponto (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    struct Ponto* ponto1 = criarPonto(x1, y1);
    struct Ponto* ponto2 = criarPonto(x2, y2);

    if (ponto1 == NULL || ponto2 == NULL) {
        printf("Erro ao alocar memória para os pontos.\n");
        return 1; // Código de erro
    }

    int area = areaRetangulo(ponto1, ponto2);
    printf("A area do retangulo formado pelos pontos eh: %d\n", area);

    // Libera a memória alocada dinamicamente
    free(ponto1);
    free(ponto2);

    return 0;
}