//Escreva um programa que, dada a idade de um nadador, 
//o classifique em uma das seguintes categorias:

#include <stdio.h>
int main(){
    int idade;

    printf("Digite a idade do nadador\n");
    scanf("%d", &idade);

    if (idade >=5 && idade<=7){
        printf("A categoria do nadador eh Infantil A\n");    
    }else if (idade >=8 && idade<=10){
        printf("A categoria do nadador eh Infantil B\n");
    }else if (idade >=11 && idade<=13){
        printf("A categoria do nadador eh Juvenil A\n");
    }else if (idade >=14 && idade<=17){
        printf("A categoria do nadador eh Juvenil B\n");
    }else if (idade >=18){
        printf("A categoria do nadador eh Senior\n");
    }else{
        printf("Idade invalida");
    }

return 0;
}
