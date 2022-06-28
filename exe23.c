#include<math.h>
#include<stdio.h>
#include<string.h>

    int main(){

        char r1[10], r2[10], r3[10], r4[10];
        float precofinal, precocarro, v1, v2, v3, v4;
        printf("Digite o preço do carro: ");
        scanf("%f",&precocarro);
        printf("O adicionar Ar condicionado?(SIM/NÃO): ");
        scanf("%s",r1);
        printf("Adicionar Pintura Metalica?(SIM/NÃO): ");
        scanf("%s",r2);
        printf("Adicionar Vidro eletrico? Metalica?(SIM/NÃO): ");
        scanf("%s",r3);
        printf("Adicionar Direção Hidraulica?(SIM/NÃO): ");
        scanf("%s",r4);

        if (strcmp(r1,"SIM")== 0){
            v1 = 1750.00;
        }

        if (strcmp(r2,"SIM")== 0){
            v2 = 800.00;

        }

        if (strcmp(r3,"SIM")== 0){
            v3 = 1200.00;

        }

        if (strcmp(r4,"SIM")== 0){
            v4 = 2000.00;

        }
        precofinal = precocarro + v1 + v2 + v3 + v4  ;
        printf("PRECO FINAL = %.2f\n",precofinal);

        return 0;
    }
