#include<stdio.h>

main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	int *ptr = &a;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	
	printf("%d\n",*ptr3);
	printf("%d\n",**ptr3);
	printf("%d\n",***ptr3);
}
