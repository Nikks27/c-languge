#include<stdio.h>

  //2. WAP to demonstrate the use of continue keyword.

main()
{
	int x;
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=10; x++)
	{
		
		if(x==n)
		{
			continue;
		}
		printf("%d ",x);
	}
}