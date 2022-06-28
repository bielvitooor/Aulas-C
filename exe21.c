#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int a, b, c, i;
    printf("Digite um numero: ");
    scanf("%d",&i);	
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite um numero: ");
    scanf("%d",&b);
    printf("Digite um numero: ");
    scanf("%d",&c);

    if (i == 1){
        if (a > b && a > c && b > c){
            printf("%d %d %d",c,b,a);
        }

        else if (a > b && a > c && c > b){
            printf("%d %d %d",b,c,a);
        }

        else if ( b > a && b > c && a > c){
            printf("%d %d %d",c,a,b);
        }

        else if ( b > a && b > c && c > a){
            printf("%d %d %d",a,c,b);
        }

        else if ( c > a && c > b && b > a){
            printf("%d% d% d",a,b,c);
        }

        else if ( c > a && c > b && a > b){
            printf("%d %d %d",b,a,c);
        }
    }

    if ( i == 2){

        if (a < b && a < c && b < c){
            printf("%d %d %d",c,b,a);
        }

        else if (a < b && a < c && c < b){
            printf("%d %d %d",b,c,a);
        }

        else if ( b < a && b < c && a < c){
            printf("%d %d %d",c,a,b);
        }

        else if ( b < a && b < c && c < a){
            printf("%d %d %d",a,c,b);
        }

        else if ( c < a && c < b && b < a){
            printf("%d %d %d",a,b,c);
        }

        else if ( c < a && c < b && a < b){
            printf("%d %d %d",b,a,c);
        }
    }

    if ( i == 3 ){

        if (a < b && a < c && b < c){
            printf("%d %d %d",b,c,a);
        }

        else if (a < b && a < c && c < b){
            printf("%d %d %d",c,b,a);
        }

        else if ( b < a && b < c && a < c){
            printf("%d %d %d",a,c,b);
        }

        else if ( b < a && b < c && c < a){
            printf("%d %d %d",c,a,b);
        }

        else if ( c < a && c < b && b < a){
            printf("%d %d %d",b,a,c);
        }

        else if ( c < a && c < b && a < b){
            printf("%d %d %d",a,b,c);
        }

    }	

    return 0;
}
