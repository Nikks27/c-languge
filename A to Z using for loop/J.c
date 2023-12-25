#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==4||i==1&&(j!=8)||i==6&&(j==1)||i==7&&(j==1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
} 
