#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int dp;
    float salario, slmin,tx,ipf, ipfs;
    printf("Digite o valor do salario minimo:")/
    scanf("%f",&slmin);
    printf("\nDigite o salario do funcionário:");
    scanf("%f",&salario);
    printf("\nDigite a quantidade de  do funcionário:");
    scanf("%i",&dp);
    printf("\nDigite O valor da Taxa normal paga:");
    scanf("%f",&tx);
    if(salario>(slmin*12)){
        tx=0.2*salario;
        ipf=0.04*tx;
        ipfs=ipf+tx;
        printf("O imposto a ser cobrado é %f",ipfs);}

    else if(salario>(slmin*5)){
        tx=0.08*salario;
        ipf=0.04*tx;
        ipfs=ipf+tx;
        printf("O imposto a ser cobrado é %f",ipfs);}
    else if( salario<(slmin*5) || salario==(slmin*5)){
    printf("Isento de IR!");
    }
return 0;
   }