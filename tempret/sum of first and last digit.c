#include<stdio.h>

//4. Write C program to find sum of first and last digit of a number.

main()
{
	int a,sum = 0,b,ld,fd;
	
	printf("Enter the num : ");
	scanf("%d",&a);
	
	ld = a%10;
	
	while(a>9)
	{
		a = a/10;
	}
	
	printf("%d + %d = %d",ld,a,ld+a);
	
	
}
