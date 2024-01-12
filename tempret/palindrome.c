#include<stdio.h>

//7. wap to check number is palindrom or not.

main()
{
	int x,p =0,a,y;
	
	printf("Enter the num : ");
	scanf("%d",&x);
	
	a = x;
	
	for(;x>0;)
	{	
		y=x%10;
		p = y + (p *10);
		x=x/10;
	}
	
	if(p == a)
	{
		printf("yes");
	}
	else
	{
		printf("not");
	}
	
}
