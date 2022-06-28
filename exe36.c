#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        int codigo;
        float valorproduto, calculo;
        printf("Digite o código: ");
        scanf("%d",&codigo);
        printf("Digite o valor do produto: ");
        scanf("%f",&valorproduto);
        
        switch (codigo){
        case 1:
            calculo = valorproduto - (0.1 * valorproduto);
        
        case 2:
            calculo = valorproduto - (0.05 * valorproduto);
        
        
        case 3:
            calculo = valorproduto;
        
        case 4:
            calculo = valorproduto + (0.1 * valorproduto);
        }
        
        printf("Preço final= %.2f\n",calculo);
        return 0;
    }