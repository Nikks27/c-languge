#include<stdio.h>

//3. Write C program to count number of digits in a number.

main()
{
	int a,count = 0;
	
	printf("Enter the num : ");
	scanf("%d",&a);
	
	while(a>0)
	{
		a=a/10;	
		count++;
	}
	printf("%d",count);
}
