/*Ponteiros (Valor: 20 pontos)
    Implemente uma função em C chamada "inverterString" que receba uma string como parâmetro (ponteiro para char) e inverta-a. 
    A função deve ser capaz de inverter a string sem alocar memória extra.
    ```c
    char str[] = "hello";
    inverterString(str);
    printf("%s", str); // Deve imprimir "olleh"    
    ```*/

#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int tamanho = strlen(str);
    
    for (int i = 0; i < tamanho / 2; i++) {
        // Troca os caracteres simétricos em relação ao centro
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
    char str[100]; // Tamanho suficientemente grande para a entrada

    printf("Digite a string: ");
    scanf("%s", str);

    inverterString(str);

    printf("A string invertida eh %s\n", str);

    return 0;
}
