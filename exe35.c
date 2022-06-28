#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int numero1,numero2, menu;
    printf("Dígite um numero: ");
    scanf("%d",&numero1);
    printf("Dígite um numero: ");
    scanf("%d",&numero2);
    printf("\n Escolha uma operação\n \n1-Adição\n \n2-Subtração\n \n3-Multiplicação\n \n4-Divisão\n");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("A soma dos numeros é :%d",numero1+numero2);
        break;
    case 2:
        printf("A subtração dos numeros é:%d",numero1-numero2);
        break;
    case 3:
        printf("A multiplicação dos numeros é:%d",numero1*numero2);
        break;
    case 4:
        printf("A divisão deses numeros é%d",numero1/numero2);
    default:
        break;
    }
    return 0;
    }