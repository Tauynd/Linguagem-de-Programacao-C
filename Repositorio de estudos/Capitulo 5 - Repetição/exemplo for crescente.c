#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int a,b,contador;
 
    printf("Digite o valor de a: ");
    scanf("%d",&a);
   
    printf("Digite o valor de b: ");
    scanf("%d",&b);
    
    for (contador = a; contador <= b; contador++){
    printf("%d \n",contador);
    }

 system("pause");
 return 0;
}