WHILE é igual o ENQUANTO no portugol
enquanto a resposta for true, eu rodo o mesmo comando. quando a resposta for false, eu paro o programa


#include <stdio.h>
//Estrutura de repetição
int main() {

    int N1,N2,contador;

    printf("Digite um numero inteiro\n");
    scanf("%d", &N1);

    printf("Digite outro numero inteiro\n");
    scanf("%d", &N2);


    //FOR
    for (contador=1; contador<=10;contador++){
        printf ("%d\n",contador);
    };

    //WHILE
    contador = 1
    while (contador <=10){
       printf ("%d\n",contador); 
    }
return 0;
}




#include <stdio.h>
//Exibir tabela asc dos caracteres
int main() {

char c;
for (c= 'A'; c <= 'Z'; c++){
    printf("Letra (%c) = %d\n", c,c);
} 
    return 0;
}
 

 
#include <stdio.h>
//DOWHILE: o while testa e verifica se roda ou nao o código, o dowhile testa no final usado como vai mostrar itens de menu para o usuário pq sempre roda o menu pela primeira vez
int main() {
    int opcao;
    
    do {
        printf("1-para comprar");
        printf("2-para vender");
        printf("3-para sair");
        scanf("%d", &opcao);)
    }while (opcao !=3);
    return 0;
}
