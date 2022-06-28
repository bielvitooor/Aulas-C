#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        float precototal;
        char cod_prod[10];
        int qt;
        printf("Digite código do produto: ");
        scanf("%s",cod_prod);
        printf("Digite a quantidade de produto:");
        scanf("%d",&qt);
        
        if (strcmp(cod_prod,"ABCD") == 0 ){
            precototal = 5.30 * qt;
            printf("Preço Final = %.2f\n",precototal);
        }
        
        else if (strcmp(cod_prod,"XYKT") == 0 ){
            precototal = 6.80 * qt;
            printf("Preço Final = %.2f\n",precototal);
        }
        
        else if (strcmp(cod_prod,"BTSD") == 0 ){
            precototal = 2.50 * qt;
            printf("Preço Final = %.2f\n",precototal);
        }
        
        else if (strcmp(cod_prod,"YPOV") == 0 ){
            precototal = 6.57 * qt;
            printf("Preço Final = %.2f\n",precototal);
        }
        
        else {
            printf("Código invalido\n");
        }    
        
        return 0;
    }
    