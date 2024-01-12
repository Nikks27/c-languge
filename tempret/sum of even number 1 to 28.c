#include<stdio.h>

//2. wap to find sum of even number between 1 to 28.

main()
{
	int x = 1,sum = 0;
	
	while(x<=28)
	{
		if(x%2==0)
		{
			printf("%d ",x);
			sum = sum + x;		
		}
		x++;
	}
	printf("\nSum is %d",sum);
}
