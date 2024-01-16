#include<stdio.h>

int calculator()
{
	int ch=1;
	int n1;
	int n2;
	char op;
	printf("enter your op:");
	scanf(" %c",&op);
	
	if(op!='0')
	{
		printf("enter n1 :");
		scanf("%d",&n1);
		printf("enter n2 :");
		scanf("%d",&n2);
	}

	switch(op)
	{
		case '1':printf("%d + %d : %d\n",n1,n2,n1+n2);
		calculator(); 
		break;
		case '2':printf("%d - %d : %d\n",n1,n2,n1-n2);
		calculator(); 
		break;
		case '3':printf("%d * %d : %d\n",n1,n2,n1*n2);
		calculator(); 
		break;
		case '4':printf("%d / %d : %d\n",n1,n2,n1/n2);
		calculator(); 
		break;
		default:printf("Error:enter valid value................");
		
		case '0':printf("Exit A Code ");
	}
	printf("\n");
	
}
int main()
{
	calculator();
}
