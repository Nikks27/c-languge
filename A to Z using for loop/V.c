#include<stdio.h>
main()
{

	int i,j;
	
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 &&(j==1 && i!=6 && i!=5)||(i==5 && j==2)||(i==6 && j==3)||(i==5 && j==4)||(i==4 && j==5 || i==3 && j==5)||(i==2 && j==5)||(i==1 && j==5))
			{
				printf("* ",j);
			}
			else
			{
				printf("  ");	
			}
				
		}
		printf("\n");
	}
}
