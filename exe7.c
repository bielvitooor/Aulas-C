#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int menu = -1;
    while (menu!= 0)
    {
        float mtc= 0.0f;
        float valor = 0.0f;
        printf("\n \n Escolha um tipo de cliente: \n 0-Sair \n 1-Residencial \n 2-Comercial \n 3- Industrial\n");
        scanf("%d",&menu);
        if (menu!=0)
        {
        printf("\n Digite a quantidade m3 de água gastos: ");
        scanf("%f",&mtc);
        switch (menu)
        {
        case 1:
            valor+=5.0+(0.05 * mtc);
            printf("Residencial \n");   
            break;
        case 2:
            if(mtc > 0.0){
                    valor = 500.0;
                }
                if(mtc > 80.0){
                    valor += 0.25 * (mtc - 80.0);
                }
                printf("Comercial\n");
                break;
            case 3:
                if(mtc > 0.0){
                    valor = 800.0;
                }
                if(mtc > 100.0){
                    valor += 0.04 * (mtc - 100.0);
                }
                printf("Industrial\n");
                break;
            default:
            break;
        }
        if(menu!= 0){
            printf("Valor a pagar => R$ %.2f\n\n", valor);
            valor = 0.0f;

        

        }
       }}
//gvsb:?)
return 0;
}