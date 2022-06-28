#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int menu=-1;
    float filme=35.00;
    float filmecond1,filmefinal;
    int menusemana=-1;
    while (menu!=0){
        printf("\n \n Tipo de aluguel? \n 1- Aluguel de Lançamento \n 2- Aluguel de fitas comuns\n 0- Sair");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            if (menu==1)
            {  filmecond1=filme+(filme*0,4);
                while (menusemana !=0)
                {
                    printf("\n Qual o dia da semanazn \n 1- Segunda,Terça ou Quinta\n \n2- Quarta,sexta,sabadoe ou domigo\n \n 0-Sair");
                    scanf("%d",&menusemana);
                    switch(menusemana){
                        case 1:
                            filmefinal=filmecond1-(filme*0,15);
                            printf("O valor do filme é a ser pago é %f:",filmefinal);
                        case 2:
                        printf(" O valor do filme a ser pago é %f:",filmecond1);
                        default:
                        break;
                    }
                break;
                }
                
            }
        
        default:
            break;
    case 2:        
        if (menu==2)
            {while (menusemana !=0)
                {
                    printf("\n Qual o dia da semanazn \n 1- Segunda,Terça ou Quinta\n \n2- Quarta,sexta,sabadoe ou domigo\n \n 0-Sair");
                    scanf("%d",&menusemana);
                    switch(menusemana){
                        case 1:
                            filme=filme-(filme*0,4);
                            printf("O valor do filme é a ser pago é %f:",filme);
                        case 2:
                        printf(" O valor do filme a ser pago é %f:",filme);
                        default:
                        break;
                    }
        }break;}
    
}}
return 0;
}