#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int conteudo, dureza, resistencia;
    printf("Digite o Conteúdo do Carbono:");
    scanf("%d",&conteudo);
    printf("Digite a dureza:");
    scanf("%d",&dureza);
    printf("Digite a resistência");
    scanf("%d",&resistencia);

    if (conteudo < 7 && dureza > 50 && resistencia > 80000){
    printf("ACO DE GRAU = 10\n");
    }

    else if (conteudo < 7 && dureza > 50 && resistencia <= 80000) {
    printf("ACO DE GRAU = 9\n");
    }

    else if (conteudo < 7 && dureza <= 50 && resistencia <= 80000){
    printf("ACO DE GRAU = 8\n");
    }

    else if (conteudo >= 7 && dureza <= 50 && resistencia <= 80000){
    printf("ACO DE GRAU = 7\n");
    }
    else{
    printf("Não valido");}

return 0;
}