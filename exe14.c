#include<stdio.h>
#include<math.h>

int main()
{
    float A, B, C;
    printf("Digite um valor: \n");
    scanf("%f",&A);
    printf("\n Digite um valor: \n");
    scanf("%f",&B);
    printf("\n Digite um valor: \n");
    scanf("%f",&C);
    
    if (pow(A,2) == pow(B,2) + pow(C,2)){
        printf("Triângulo retângulo\n");
    }
    
    else if (pow(A,2) > pow(B,2) + pow(C,2)){
        printf("Triângulo obtusânglo\n");
    }
    
    else if (pow(A,2) < pow(B,2) + pow(C,2)){
        printf("Triângulo acutângulo\n");
    }
    return 0;    
}