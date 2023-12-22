#include <stdio.h>
int main (){
    int N,R4,R5;

    printf("Digite um numero inteiro: ");
    scanf("%d",&N);

    if ((N % 4 == 0) && (N% 5 ==0)){
        printf("O numero %d eh divisivel por 4 e 5\n",N);
    }else{
        printf("O numero %d nao eh divisivel por 4 e 5\n",N);
    }
    
    return 0;
}