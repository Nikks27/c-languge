#include<stdio.h>

//A
//B C
//D E F
//G H I J
//K L M N O

main()
{
	char i,j,k=65;
	
	for(i=65; i<=69; i++)
	{
		for(j=65; j<=i; j++)
		{
			printf("%c ",k++);
		}
		printf("\n");
	}
}
