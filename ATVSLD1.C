#include <stdio.h>
int main()
{
    float distancia,tempo=0.583333,velocidade=80,litros_usados; 
  
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;
    printf("LITROS GASTOS    = %10.2f litros \n", litros_usados);
 
    return(0);
}