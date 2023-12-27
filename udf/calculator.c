#include<stdio.h>

void calculator()
{
   int n,m;
   char op;
   printf("enter the value of op : ");
   scanf("%c",&op);
   printf("enter the value of n : ");
   scanf("%d",&n);
   printf("enter the value of m : ");
   scanf("%d",&m);
   switch(op)
   {
      case '+':printf("%d + %d = %d",n,m,n+m);
	  break;
	  case '-':printf("%d - %d = %d",n,m,n-m);
	  break;
	  case '*':printf("%d * %d = %d",n,m,n*m);
	  break;
	  case '/':printf("%d / %d = %d",n,m,n/m);
	  break;
	  default:("enter the valid number ");	
   }
   calculator();  	
}
main()
{
	calculator();
}
