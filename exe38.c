#include<math.h>
#include<stdio.h>
#include<string.h>
        
 int main(){
           
            int consumoanual;
            char nome[10];
            float valorlt;
            printf("Dígite o nome do posto: ");
            scanf("%s",nome);
            printf("Dígite o consumo anul do posto(Litros): ");
            scanf("%d",&consumoanual);
            
            if (consumoanual <= 50000){
                valorlt = (0.2 * 1.63) + 1.63 ;
                printf("Preço reajustado do litro do combustivel = %.2f\n",valorlt);
            }
            
            else if (consumoanual > 50000){
                valorlt = (0.12 * 1.63) + 1.63;
                printf("Preço reajustado do litro do combustivel = %.2f\n",valorlt);
            }
            
            return 0;
        }
