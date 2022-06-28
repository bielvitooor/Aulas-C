#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        char cod_prod[10];
        int qt;
        float total;
        printf("Digite código do produto: ");
        scanf("%s",cod_prod);
        printf("Digite a quantidade de produto:");
        scanf("%d",&qt);
        
        if ( strcmp(cod_prod,"1001") == 0){
            total = 5.32 * qt;
            printf("Preço total = %.2f\n",total);
        }
        else if ( strcmp(cod_prod,"1234") == 0){
            total = 6.45 * qt;
            printf("Preço total = %.2f\n",total);
        }
        else if ( strcmp(cod_prod,"6548") == 0){
            total = 2.37 * qt;
            printf("Preço total = %.2f\n",total);
        }
        else if ( strcmp(cod_prod,"0987") == 0){
            total = 5.32 * qt;
            printf("Preço total = %.2f\n",total);
        }
        else if ( strcmp(cod_prod,"7623") == 0){
            total = 6.45 * qt;
            printf("Preço total = %.2f\n",total);
        }
        
        else { 
            printf("Código invalido (Produto inexistente)\n");
        } 
        
        return 0;
    }