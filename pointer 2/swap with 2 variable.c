#include<stdio.h>



main()
{
	int n,i,j;
		
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the value of i : ");
	scanf("%d",&i);
		
	n = n+i;
	i = n-i;
	n = n-i;
	
	int *ptr =	&n;
	int *ptr2 =  &i;
	
	printf("n is : %d\n", *ptr);
	printf("i is : %d", *ptr2);
}
