#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    float altura, pesomasc, pesofem;
    int sexo;
    printf("Digite a Altura: ");
    scanf("%f",&altura);
    printf("\nEscolha um sexo \n \n1- Masculino\n \n2-Feminino\n");
    scanf("%d",&sexo);
    switch (sexo){
    case 1:
    pesomasc = (72.7 * altura) - 58;
        printf("PESO = %.2f\n",pesomasc);
        break;
    case 2:
        pesofem = (62.1 * altura) - 44.7;
        printf("PESO = %.2f\n",pesofem);
        break;
    default:
        break;
    }
   
return 0;	
}