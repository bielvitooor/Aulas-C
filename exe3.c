#include<stdio.h>
#include<math.h>
int main()
{
int x, y;
printf("Digite um valor: ");
scanf("%d",&x);

if(x < 1)
{
y = x;
printf("Y = %d\n",y);
}	

else if(x == 1)
{
y = 0;
printf("Y = %d\n",y);
}

else if(x > 1)
{
y = pow(x,2);
printf("Y = %d\n",y);
}

return 0;
}