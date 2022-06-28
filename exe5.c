#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int sala, cap, aluno, restc;
    printf("\n Digite o numero da sala:");
    scanf("%d",&sala);
    printf("\nDigite a capacidade de alunos na sala:");
    scanf("%d",&cap);
    printf("\n  Digite o numero de alunos matriculados na sala:");
    scanf("%d",&aluno);
    restc=cap-aluno;
    printf(" Foi selecionado a sala %d ,",sala);
    printf("tem a capacidade total de %d alunos,", aluno);
    if(cap==aluno){
        printf(" e a quantidade de cadeira ocupadas é %d!",aluno);
        printf(" A sala %d está lotada!", sala);
    }
     else if (aluno<cap)
    {
        printf(" A quantidade de cadeiras livres é de %d ",restc);
        printf(" e a quantidade de cadeira ocupadas é %d!",aluno);
        printf(" Ainda há espaço na sala %d!",sala);}

return 0;   
}