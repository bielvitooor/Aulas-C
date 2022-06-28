#include<math.h>
#include<stdio.h>
#include<string.h>
    int main(){

        float salariobruto, salarioliquido, horasextrasreceber, discinss, discirf;
        int horaextras,salariominimo=1212.00,salariohora_extra= 80.00;
        char nome[20];
        printf("Nome do funcionario: ");
        scanf("%s",nome);
        printf("Horas extras trabalhadas: ");
        scanf("%d",&horaextras);

        horasextrasreceber = horaextras * salariohora_extra;
        salariobruto = salariominimo + horasextrasreceber;
        discirf = 0;
        discinss = 0;

        if (salariobruto > 1500){
            discinss = salariobruto * 0.12;	
        }

        if (salariobruto > 2000){
            discirf =  salariobruto * 0.2 ;
        }

        salarioliquido = salariobruto - (discinss + discirf);

        printf("Salário Bruto = %.2f\n",salariobruto);
        printf("Salário Liquido = %.2f\n",salarioliquido);

        return 0;
    }
