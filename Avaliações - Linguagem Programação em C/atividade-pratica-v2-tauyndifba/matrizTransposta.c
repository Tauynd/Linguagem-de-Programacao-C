/* Matrizes (Valor: 30 pontos)
    Considere a seguinte matriz quadrada de ordem `3x3`:
    ```c
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    ```
    1. Escreva na função `main` um trecho de código em C que calcule e imprima a soma de todos os elementos da matriz.
    1. Escreva uma função em C que receba a matriz como parâmetro e retorne a matriz transposta (inverter linhas e colunas).*/

#include <stdio.h>

void transposta(int matriz[3][3]) {
    int temp;

    // Transpondo a matriz
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            // Troca os elementos [i][j] e [j][i]
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

int main() {
    int soma = 0;
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculando a soma dos elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma = soma + matriz[i][j];
        }
    }

    printf("A soma de todos os elementos da matriz eh igual a: %d\n", soma);

    // Chamando a função para calcular a matriz transposta
    transposta(matriz);

    // Imprimindo a matriz transposta
    printf("Matriz Transposta:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
