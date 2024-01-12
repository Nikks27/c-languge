#include<stdio.h>

//8. wap to printf multiplication table of 1 to 10 

main()
{
	int a=1,b;
	
	for(b=1;b<=10;b++)
	{
		for(a=1;a<=10;a++)
		{	
			printf("%d * %d = %d\n",b,a,a*b);
		}	
		printf("\n");
	}
	
}
