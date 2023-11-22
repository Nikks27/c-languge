#include<stdio.h>
//WAP to Find if a given no. is neutral or not using ladder if else.
main()
{
	int a;
	
	printf("Enter the Num : ");
	scanf("%d",&a);
	
	if(a>0)
	{
	
		if(a<0)
		{
			printf("Number is negative");
		}
		else
		{
			printf("Number is Positive");	
	 	}
	}
	else
	{
		if(a==0)
		{
			printf("Number is neutral");	
		}
		else
		{
			printf("negative");
		}	
	}	
}