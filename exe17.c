#include<stdio.h>
#include<math.h>

int main()
{
    int cod_aluno;
    float n1, n2, n3, mediaponderada;

    printf("Digite o codigo do aluno: ");
    scanf("%d",&cod_aluno);
    printf("Digite a nota 1: ");
    scanf("%f",&n1);
    printf("Digite a nota 2: ");
    scanf("%f",&n2);
    printf("Digite a nota 3: ");
    scanf("%f",&n3);

    if (n1 > n2 && n1 > n3){
        mediaponderada = (( n1 * 4 ) + (n2 * 3) + (n3 * 3)) /10;
    }

    else if (n2 > n1 && n2 > n3){
        mediaponderada = (( n2 * 4 ) + (n1 * 3) + (n3 * 3)) /10;
    }

    else if (n3 > n1 && n3 > n2){
        mediaponderada = (( n3 * 4 ) + (n1 * 3) + (n2 * 3.)) /10;
    }

    if (mediaponderada >= 5.00){
        printf("CODIGO DO ALUNO = %d\n",cod_aluno);
        printf("NOTA 1 = %.2f\n",n1);
        printf("NOTA 2 = %.2f\n",n2);
        printf("NOTA 3 = %.2f\n",n3);
        printf("MEDIA = %.2f\n",mediaponderada);
        printf("APROVADO\n");
    }

    else if (mediaponderada < 5.00){
        printf("CODIGO = %d\n",cod_aluno);
        printf("NOTA 1 = %.2f\n",n1);
        printf("NOTA 2 = %.2f\n",n2);
        printf("NOTA 3 = %.2f\n",n3);
        printf("MEDIA = %.2f\n",mediaponderada);
        printf("REPROVADO\n");
    }

    return 0;	
}