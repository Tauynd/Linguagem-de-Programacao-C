#include <stdio.h>
///Dado um valor em reais e a cotação do dólar, converta esse valor 
///para dólares.

int main() {
    float REAL,COT,DOLAR;
    
    printf("Digite o valor em real\n");
    scanf("%f", &REAL);

    printf("Digite a cotacao do dolar\n");
    scanf("%f", &COT);

    DOLAR=(REAL/COT);
    
    printf("O valor em dolar eh igual a %f",DOLAR);
    return 0;
}