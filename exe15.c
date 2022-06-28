#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    float n1, n2, n3, media;
    printf("Digite a nota 1: ");
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    printf("Digite a nota 3: ");
    scanf("%f",&n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if (media >= 6.00){
        printf("Média = %.2f",media);
        printf("\n AEEEEE APROVADO\n");
    }
    
    else if ( media < 6.00){
        printf("Média = %.2f\n",media);
        printf("UUUUUUH REPROVADO\n");
    }    
    return 0;    
}
