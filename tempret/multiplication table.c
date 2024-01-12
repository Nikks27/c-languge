#include<stdio.h>

//2. Write C program to print multiplication table of any number.

main()
{
	int a=1,n;
	
	printf("Enter the table num : ");
	scanf("%d",&n);
	
	for(a=1;a<=10;a++)
	{
		printf("%d * %d = %d\n",n,a,a*n);
	}
}
