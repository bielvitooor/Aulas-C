#include<stdio.h>
#include <stdlib.h>
int main (){
    int numero;
    printf("\nDigita um numero aqui:\n");
    scanf("%i",&numero);
    if (numero % 5==0 && numero % 3==0){
        printf("\n É divisivel por 5 e 3 ");
    }
    else{
        printf("Não é divisivel por 5 e 3");
    }
return 0;
}
