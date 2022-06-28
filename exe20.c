#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    float nota1, nota2, nota3, calculo;
    int tpcalculo;
    printf("Digite a nota 1: ");
    scanf("%f",&nota1);
    printf("Digite a nota 2: ");
    scanf("%f",&nota2);
    printf("Digite a nota 3: ");
    scanf("%f",&nota3);
    printf("\n Escolha um tipo de calculo de media\n \n1-Aritmetica\n \n2-Ponderada\n \n3-Harmonica\n");
    scanf("%i",&tpcalculo);
    switch (tpcalculo)
    {
    case 1:
        calculo = (nota1 + nota2 + nota3) / 3;
        printf("MEDIA ARITMETICA = %.2f\n",calculo);        
        break;
    case 2:
        calculo = (( nota1 * 3 ) + (nota2 * 3) + (nota3 * 4)) /10;
        printf("MEDIA PONDERADA = %.2f\n",calculo);
        break;
    case 3:
        calculo = 3/(1/nota1 + 1/nota2 +1/nota3);
        printf("MEDIA HARMONICA = %.2f\n",calculo);   
        break;    

    default:
        break;
    }
    return 0;	

}

