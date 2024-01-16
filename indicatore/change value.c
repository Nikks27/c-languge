#include<stdio.h>

//4. wap to change value by passing address of variable in udf

void val(int *ptr,int *ptr2)
{
	printf("Your Value : %d\n",*ptr);
	printf("Your Change Value : %d",*ptr2);
}

main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the your change value : ");
	scanf("%d",&b);
	
	int *ptr = &a;
	int *ptr2 = &b;
	
	val(ptr,ptr2);	
}
