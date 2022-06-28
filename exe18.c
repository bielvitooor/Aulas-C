#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
    int numero;
    printf("Digite um numero:");
    scanf("%d",&numero);
    if (numero%2==0)
    {
        printf("\n %d É par",numero);
    }
    else if( numero%2!=0){
        printf("\n %dÉ impar",numero);
    }
    if (numero<0)
    {
    printf("\n %d É negativo");
    }
    else if(numero>=0){
        printf("\n %d É positivo");
    }

    
    
}