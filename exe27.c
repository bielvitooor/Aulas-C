#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int numero, n1, n2, n3, n4, aux, primeira, segunda, soma, calculo;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    n1 = numero / 1000;
    aux = numero % 1000;
    n2 = aux / 100;
    aux = aux % 100;
    n3 = aux / 10;
    n4 = aux % 10;

    primeira = (n1 * 10 ) + n2;
    segunda = (n3 * 10 ) + n4;
    soma = primeira + segunda;
    calculo = pow(soma,2);

    if (calculo == numero){
        printf("O numero tem a caracteristica\n");
    }

    else {
        printf("o numero não tem a caracteristica\n");
    }

return 0;
}
