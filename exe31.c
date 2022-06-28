#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        float salario, aumento, novosal, diferencas;
        int cargo;
        printf("Dígite o salário do funcionário:");
        scanf("%f",&salario);
        printf("\n Qual o cargo do funcionário?\n \n1-Gerente\n \n2-Engenheiro\n \n3-Técnico\n \n0- Nenhum dos anteriores\n");
        scanf("%d",&cargo);
        switch (cargo)
        {
         case 1: //GERENTE
            aumento = 0.1 * salario;
            novosal = salario + aumento;
            diferencas = novosal - salario;
            printf("Antigo Salário = %.2f\n",salario); 
            printf("Novo Salário = %.2f\n",novosal);
            printf("Diferença entre os salários = %.2f\n",diferencas);
            break;
        
         case 2: //ENGENHEIRO
            aumento = 0.2 * salario;
            novosal = salario + aumento;
            diferencas = novosal - salario;
            printf("Antigo Salário = %.2f\n",salario); 
            printf("Novo Salário = %.2f\n",novosal);
            printf("Diferença entre os salários = %.2f\n",diferencas);
            break;
        
         case 3: // TECNICO
            aumento = 0.3 * salario;
            novosal = salario + aumento;
            diferencas = novosal - salario;
            printf("Antigo Salário = %.2f\n",salario); 
            printf("Novo Salário = %.2f\n",novosal);
            printf("Diferença entre os salários = %.2f\n",diferencas);
            break;
        
            default://FORA DA TABELA
            aumento = 0.4 * salario;
            novosal = salario + aumento;
            diferencas = novosal - salario;
            printf("Antigo Salário = %.2f\n",salario); 
            printf("Novo Salário = %.2f\n",novosal);
            printf("Diferença entre os salários = %.2f\n",diferencas);
            break;
        }
        
        return 0;
    }