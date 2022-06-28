#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    if (n<0)
    {
      printf("\n %d é negativo",n);
    }
    else if(n>0){
        printf("\n %d é positivo",n);
    }
    if(n%3==0){
        printf("\n %d É multiplo de por 3",n);
    }
    else if(n%3!=0){
        printf("\n %d Não multiplo de por 3",n);
    }
return 0;
}