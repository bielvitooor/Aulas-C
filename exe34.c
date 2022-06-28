#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        int idade;
        char nome[20];
        printf("Digite a idade do atleta: ");
        scanf("%d",&idade);
        printf("Dígite o nome do atleta: ");
        scanf("%s",nome);
        
        if (idade >= 5 && idade <= 10){
            printf("%s\n",nome);
            printf("%d\n",idade);
            printf("Infantil\n");
        }
        else if (idade >= 11 && idade <= 17){
            printf("%s\n",nome);
            printf("%d\n",idade);
            printf("Juvenil\n");
            
        }
        else if (idade >= 18 ){
            printf("%s\n",nome);
            printf("%d\n",idade);
            printf("Senior\n");
        }    
        return 0;
    }
