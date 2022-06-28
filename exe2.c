#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    int v1, v2,v3,v4;
    printf("\n Digite outro numero:");
    scanf("%d",&v1);
    printf("\n Digite outro numero:");
    scanf("%d",&v2);
    printf("\n Digite outro numero:");
    scanf("%d",&v3);
    printf("\n Digite outro numero:");
    scanf("%d",&v4);
    if (v1>v2 && v3>v4)
    {
        int soma = (v2+v3+v4);
        printf("A SOMA DOS 3 MENOS NUMEROS É:%d",soma);
    }
    else if (v2>v1 && v2>v3&& v2>v4)
    {
        int soma = (v1+v3+v4);
        printf("A SOMA DOS 3 MENOS NUMEROS É:%d",soma);
    }
    else if (v3>v1 && v3>v2&& v3>v4)
    {
        int soma = (v1+v2+v4);
        printf("A SOMA DOS 3 MENOS NUMEROS É:%d",soma);
    }
    else if (v4>v1 && v4>v2&& v4>v2)
    {
        int soma = (v1+v2+v3);
        printf("A SOMA DOS 3 MENOS NUMEROS É:%d",soma);
    }
return 0;
}