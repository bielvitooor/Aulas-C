#include<math.h>
#include<stdio.h>
#include<string.h>
    //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
    
    int main(){
       
        char bairro[15];
        int prefixo, n1, n2, n3 ,aux , compareprefixo;
        printf("Qual o nome do bairro que deseja ligar?: ");
        scanf("%s",&bairro);
        printf("Digite o prefixo: ");
        scanf("%d",&prefixo);
        
        n1 = prefixo / 1000000;
        aux = prefixo % 1000000;
        n2 = aux / 100000;
        aux = aux % 100000;
        n3 = aux / 10000;
        compareprefixo = (n1 * 100) + ( n2 * 10 ) + n3;
        
        if ((strcmp(bairro,"OESTE") == 0 || strcmp(bairro,"VILA NOVA") == 0 || strcmp(bairro,"COIMBRA") == 0) && (compareprefixo == 223 || compareprefixo == 225 || compareprefixo ==212 || compareprefixo == 243)){
           
            printf("O TELEFONE ESTA CORRETO\n");
        }
        
        else if ((strcmp(bairro,"CENTRO") == 0 || strcmp(bairro,"UNIVERSITARIO") == 0 || strcmp(bairro,"SUL") == 0) && (compareprefixo == 223 || compareprefixo == 224 || compareprefixo == 215 || compareprefixo == 295)) {
           
            printf("O TELEFONE ESTA CORRETO\n");
        }
        
        else if ((strcmp(bairro,"BUENO") == 0 || strcmp(bairro,"CAMPINAS") == 0 || strcmp(bairro,"LESTE") == 0 ) && (compareprefixo == 215 || compareprefixo == 212 || compareprefixo == 291 || compareprefixo == 268)){
           
            printf("O TELEFONE ESTA CORRETO\n");
        }
        
        else {
            printf("O TELEFONE ESTA INCORRETO\n");
        }
        
        return 0;
    }

