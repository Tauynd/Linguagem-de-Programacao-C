#include <stdio.h>
int main (){
    int A,B,C;
    int nulo, branco, total,totalV;
    float PVA,PVB,PVC,PVT,PVN,PVW;

    printf("Digite o numero de votos do candidato A: ");
    scanf("%d",&A);

    printf("Digite o numero de votos do candidato B: ");
    scanf("%d",&B);

    printf("Digite o numero de votos do candidato C: ");
    scanf("%d",&C);

    printf("Digite o numero de votos brancos: ");
    scanf("%d",&branco);

    printf("Digite o numero de votos nulos: ");
    scanf("%d",&nulo);

    total=A+B+C+nulo+branco;
    printf("O total de eleitores considerando validos, brancos e nulos eh igual a %d\n", total);

    totalV=A+B+C;
    PVT=100*totalV/total;
    printf("\nO percentual correspondente de votos validos em relacao a quantidade de eleitores eh igual a %0.2f", PVT);    
    
    PVA=100*A/total;
    printf("\nO percentual correspondente de votos validos do candidato A em relacao a quantidade de eleitores eh igual a %0.2f",PVA);

    PVB=100*B/total;
    printf("\nO percentual correspondente de votos validos do candidato B em relacao a quantidade de eleitores eh igual a %0.2f",PVB);

    PVC=100*C/total;
    printf("\nO percentual correspondente de votos validos do candidato C em relacao a quantidade de eleitores eh igual a %0.2f",PVC);

    PVN=100*nulo/total;
    printf("\nO percentual correspondente de votos nulos em relacao a quantidade de eleitores eh igual a %0.2f",PVC);

    PVW=100*branco/total;
    printf("\nO percentual correspondente de votos brancos em relacao a quantidade de eleitores eh igual a %0.2f",PVW);

    return 0;

}