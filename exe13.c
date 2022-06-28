#include<stdio.h>
#include<math.h>

int main()
{
    float A, B, C;
    printf("Digite uma medida: \n");
    scanf("%f",&A);
    printf("\nDigite uma medida: \n");
    scanf("%f",&B);
    printf("\nDigite uma medida: \n");
    scanf("%f",&C);
    
    if (C > A + B  || A > B + C  || B > A + C ){
        printf("num é um Triangulo não\n");
    }
    
    else if ( A != B && A != C &&  B != C ){
        printf("Triangulo escaleno\n");
    } 
    
    else if ( A == B && A == C){
        printf("Triangulo Equilatero\n");
    }
    
    else if (A == B || A == C || B == C){
        printf("Triangulo Isoceles\n");
    }
    
return 0;    
}
