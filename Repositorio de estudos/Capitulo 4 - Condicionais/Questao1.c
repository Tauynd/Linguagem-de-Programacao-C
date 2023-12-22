//Ler três valores para os lados de um triângulo, considerando lados como: A, B e C. 
//Verificar se os lados fornecidos formam realmente um triângulo. 
//Se for esta condição verdadeira, deve ser indicado qual tipo de triângulo foi formado: isósceles, escaleno ou equilátero.

#include <stdio.h>
int main(){
    float A,B,C,TRI;

    printf("\nDigite a medida do lado A do triangulo: ");
    scanf("%f",&A);

    printf("\nDigite a medida do lado B do triangulo: ");
    scanf("%f",&B);
    
    printf("\nDigite a medida do lado C do triangulo: ");
    scanf("%f",&C);        

    if ((A<(B+C)) && (B<(A+C)) && (C<(A+B))){
        printf("\nAs medidas informadas formam um triangulo do tipo: ");
        if ((A==B) && (B==C) && (A==C)){
            printf("EQUILATERO");
        }else if ((A==B)||(A==C)||(B==C)){
            printf("ISOSCELES");
        }else{
            printf("ESCALENO");
        }
        
    }else{
        printf("\nAs medidas informadas nao formam um triangulo. Informe novas medidas");
    }
    
    return 0;
}