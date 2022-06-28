#include<math.h>
#include<stdio.h>
#include<string.h>
#define pi 3.1415

int main(){

    float precolata, altura, arealateral, areadabase, areatotal, custo;
    int raio, quantidadelatas;
    printf("Digite o preço da lata de 5L: ");
    scanf("%f",&precolata);
    printf("Digite o valor do raio:");
    scanf("%d",&raio);
    printf("Digite o valor da altura:");
    scanf("%f",&altura);

    areadabase = pi * pow(raio,2);
    arealateral = 2 * pi * raio * altura;
    areatotal = (2 * areadabase) + arealateral;

    quantidadelatas = areatotal / 15;
    custo = quantidadelatas * precolata;
    printf("Quantidae de latas = %d\n",quantidadelatas);
    printf("Custo final = %.2f\n",custo);

    return 0;
}