#include<stdio.h>

main()
{
	int n,i,x;
		
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the value of i : ");
	scanf("%d",&i);
		
	x = n; 
	n = i;
	i = x;
	
	int *ptr =	&n;
	int *ptr2 =  &i;
	
	printf("n is : %d\n", *ptr);
	printf("i is : %d", *ptr2);
}
