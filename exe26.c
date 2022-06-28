#include<math.h>
#include<stdio.h>
#include<string.h>
    
    int main(){
       
        int numero, verificaint;
        float verificar, intoufloat;
        scanf("%d",&numero);
        
        verificar = sqrt(numero);
        verificaint = verificar;
        intoufloat = verificar - verificaint;
        
        if (intoufloat == 0){
            printf("É um quadrado perfeito :)\n");
        }
        
        else {
            printf("Não é um quadrado perfeito\n");
        } 
        
        return 0;
    }