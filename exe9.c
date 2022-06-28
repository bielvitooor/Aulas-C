#include<stdio.h>
#include<math.h>
int main (){
    int menu=-1;
    float area=00.0;
    float volume=00.0;
    float altura=00.0;
    float raio=00.0;
    float resultadoa=0.0;
    float resultadov=0.0;
    float pi= 3.14;

    while (menu!=0)
    {
        printf("\n Escolha a figura a ser calculada:\n \n1-Cilindro\n \n-2-Cone\n \n3-esfera\n");
        scanf("%d",&menu);
        switch (menu)

        {
        case 1:
        printf("\nDigite o Raio do Cilindro: ");
        scanf("%f",&raio);
        printf("\nDigite a altura do cilindro:");
        scanf("%f",&altura);
        resultadoa=(2 * pi) * (raio * altura);
        resultadov=((pi * pow(raio,2)) * altura);
        printf("\n O valor da aréa do cilindro é %f",resultadoa);
        printf("\n O valor do volume do cilindro é %f:", resultadov);
            break;
        case 2:
        printf("\nDigite o Raio do cone: ");
        scanf("%f",&raio);
        printf("\nDigite a altura do cone:");
        scanf("%f",&altura);
        resultadoa=(pi * raio) * sqrt(pow(raio,2) + pow(altura,2));
        resultadov=((pi * pow(raio,2)) * altura) / 3;
        printf("\n O valor da aréa do Cone é %f",resultadoa);
        printf("\n O valor do volume do Cone é %f:", resultadov);
            break;
        case 3:
        printf("\nDigite o Raio da Esfera: ");
        scanf("%f",&raio);
        printf("\nDigite a altura da Esfera:");
        scanf("%f",&altura);
        resultadoa= (4 * (pi * pow(raio,2)));
        resultadov=(pi * 4 * pow(raio,3)) / 3;
        printf("\n O valor da aréa da Esfera é %f",resultadoa);
        printf("\n O valor do volume da Esfera é %f:", resultadov);
            break;


        default:
            break;
        }
    }
return 0;
}