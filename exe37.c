#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
        char nome[20];
        int tempo, aux1, aux2,novotempo;
        float calculo, total, restohoras;
        printf("Dígite o nome:");
        scanf("%s",nome);
        printf("Dígite o tempo(minutos):");
        scanf("%d",&tempo);
        
        if (tempo <= 3){
            calculo = 3;
            printf("Usuário = %s\n",nome);
            printf("Conta = %.2f\n",calculo);
        }
        
        else if (tempo > 3){
            novotempo = tempo - 3;
            aux1 = novotempo / 5;
            aux2 = novotempo % 5;
            calculo =  aux1 * 1.50;
            restohoras = aux2 * 0.25;
            total = 3 +  calculo + restohoras;
            printf("Usuário = %s\n",nome);
            printf("Conta = %.2f\n",total);
        }
        return 0;
    }