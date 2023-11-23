#include<stdio.h>

  //3. WAP to find the n number factorial without a loop. (using a goto statement).

main()
{
	int x=1;
	int factoreal=1;
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	start:
	
	factoreal=factoreal*x;
	x++;
	
	if (x<=n)
	{
		goto start;
	}
	printf("%d",factoreal);
	
}