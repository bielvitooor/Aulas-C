#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float salario,sreajust;
    printf("Digite o valor do salario: ");
    scanf("%f",&salario);
    
    if (salario <= 300.00){
        sreajust = (0.5 * salario) + salario;    
        printf("Salario com reajuste = %.2f",sreajust);
    }
    
    else if (salario > 300.00){
        sreajust = (0.3 * salario) + salario;    
        printf("Salario com reajuste = %.2f\n",sreajust);
    }
    return 0;    
}
