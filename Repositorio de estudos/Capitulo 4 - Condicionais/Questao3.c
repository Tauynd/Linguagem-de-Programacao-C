#include <stdio.h>
int main (){
    int N1,N2,X;

    printf("Digite um numero inteiro: ");
    scanf("%d",&N1);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&N2);

    if (N1>N2){
        X=N1-N2;
        printf("A diferenca entre %d e %d eh igual a %d", N1,N2,X);
    }else if (N2>N1){
        X=N2-N1;
        printf("A diferenca entre %d e %d eh igual a %d", N2,N1,X);        
    }else{
        printf("Os numeros digitados sao iguais");
    }
    return 0;
    }
