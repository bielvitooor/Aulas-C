#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        int ninscrição;
        float n1, n2, n3, mediaexerc, mediaaproveitamento;
        printf("Digite o ID da Inscrição: ");
        scanf("%d",&ninscrição);
        printf("Digite a média de exercicios:");
        scanf("%f",&mediaexerc);
        printf("Digite a nota 1: ");
        scanf("%f",&n1);
        printf("Digite a nota 2: ");
        scanf("%f",&n2);
        printf("Dígite a nota 3: ");
        scanf("%f",&n3);
        
        mediaaproveitamento = ((n1 + (n2 * 2 )) + (( n3 * 3 ) + mediaexerc )) / 7;
        
        if (mediaaproveitamento >= 9.1 && mediaaproveitamento <= 10){
            printf("NUMERO DA ID= %d\n",ninscrição);
            printf("Média de Exerciicios = %.2f\n",mediaexerc);
            printf("Média de aproveitamento = %.2f\n",mediaaproveitamento);
            printf("Conseito A, Aluno Aprovado!\n");
        }
        
        else if (mediaaproveitamento >= 7.6 && mediaaproveitamento <= 9){
            printf("NUMERO DA ID= %d\n",ninscrição);
            printf("Média de Exerciicios = %.2f\n",mediaexerc);
            printf("Média de aproveitamento = %.2f\n",mediaaproveitamento);
            printf("Conseito B, Aluno Aprovado!\n");
        }
        
        else if (mediaaproveitamento >= 6.1 && mediaaproveitamento <= 7.5){
            printf("NUMERO DA ID= %d\n",ninscrição);
            printf("Média de Exerciicios = %.2f\n",mediaexerc);
            printf("Média de aproveitamento = %.2f\n",mediaaproveitamento);
            printf("Conseito C, Aluno Aprovado!\n");
        }
        
        else if (mediaaproveitamento >= 4.1 && mediaaproveitamento <= 6.0){
            printf("NUMERO DA ID= %d\n",ninscrição);
            printf("Média de Exerciicios = %.2f\n",mediaexerc);
            printf("Média de aproveitamento = %.2f\n",mediaaproveitamento);
            printf("Conseito D, Aluno Reprovado!\n");
        }
        
        else if (mediaaproveitamento <= 4){
            printf("NUMERO DA ID= %d\n",ninscrição);
            printf("Média de Exerciicios = %.2f\n",mediaexerc);
            printf("Média de aproveitamento = %.2f\n",mediaaproveitamento);
            printf("Conseito E, Aluno Reprovado!\n");
        }
        
        return 0;
    }