#include<stdio.h>
#include<math.h>

int main()
{
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite um numero: ");
    scanf("%d",&n2);
    printf("Digite um numero: ");
    scanf("%d",&n3);
    
    if (n1 > n2 && n1 > n3){
        printf("O maior numero digitado foi %d\n",n1);
    }
    
    else if (n2 > n1 && n2 > n3){
        printf("O maior numero digitado foi %d\n",n2);
    }
    
    else if (n3 > n1 && n3 > n2){
        printf("O maior numero digitado foi %d\n",n3);
    }
    
    return 0;    
}