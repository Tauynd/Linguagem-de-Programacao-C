#include <stdio.h>
//Escreva uma função que receba dois valores inteiros e os inverta entre si usando ponteiros.

int invert (int a, int b){
    int temp=0;

    temp=a;
    a=b;
    b=temp;

    return b,a;
}

int main() {

    int x,y;
    int result=0;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&x,&y);

    result = invert(x,y);

    printf("Os numeros invertidos sao %d %d", result);


    return 0;
}
