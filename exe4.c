#include <stdlib.h>
#include<stdio.h>
int main(){
    int mes, ano;
    printf("Digite um mês(1,2...):");
    scanf("%d",&mes);
    printf("Digite um Ano:");
    scanf("%d",&ano);
    if (((ano% 4==0) && (ano% 100!=0)) || (ano% 400==0)){
    switch (mes)
    {
    case 1:
        printf("O mês de Janeiro tem 31 dias");
        break;
    case 2:
        printf("O mês de Fevereiro tem 29 dias");
        break;
    case 3:
        printf("O mês de Março tem 31 dias");
        break;
    case 4:
        printf("O mês de Abril tem 30 dias");
        break;
    case 5:
        printf("O mês de Maio tem 31 dias");
        break;
    case 6:
        printf("O mês de Junho tem 30 dias");
        break;
    case 7:
        printf("O mês de Julho tem 31 dias");
        break;
    case 8:
        printf("O mês de Agosto tem 30 dias");
        break;
    case 9:
        printf("O mês de Setembro tem 31 dias");
        break;
    case 10:
        printf("O mês de Outubro tem 30 dias");
        break;
    case 11:
        printf("O mês de Novembro tem 31 dias");
        break;
    case 12:
        printf("O mês de Dezembro tem 30 dias");
        break;
    default:
    printf("Mês invalido");
        break;
    }}
    else{
        switch (mes)
    {
    case 1:
        printf("O mês de Janeiro tem 31 dias");
        break;
    case 2:
        printf("O mês de Fevereiro tem 28 dias");
        break;
    case 3:
        printf("O mês de Março tem 31 dias");
        break;
    case 4:
        printf("O mês de Abril tem 30 dias");
        break;
    case 5:
        printf("O mês de Maio tem 31 dias");
        break;
    case 6:
        printf("O mês de Junho tem 30 dias");
        break;
    case 7:
        printf("O mês de Julho tem 31 dias");
        break;
    case 8:
        printf("O mês de Agosto tem 30 dias");
        break;
    case 9:
        printf("O mês de Setembro tem 31 dias");
        break;
    case 10:
        printf("O mês de Outubro tem 30 dias");
        break;
    case 11:
        printf("O mês de Novembro tem 31 dias");
        break;
    case 12:
        printf("O mês de Dezembro tem 30 dias");
        break;
    default:
    printf("Mês invalido");
        break;
    } }
    if (((ano% 4==0) && (ano% 100!=0)) || (ano% 400==0))
    {
     printf("O ano %d tem 366 dias! \n",ano);
    }
    else{
        printf("\n O ano de %d tem 365 dias!",ano);
    }
return 0;
}
