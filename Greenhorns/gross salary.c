#include<stdio.h>
int main()
{
 int s,hr,da,ta,gs;
 printf("enter your a value salary:");
 scanf("%d",&s);
 hr=s*10/100;
 da=s*5/100;
 ta=s*8/100;
 gs=s+hr+da+ta;
 printf("GR0SS SALARY IS %d",gs);
}
