#include<stdio.h>

int main()
{
	int x;
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x++)
	{
       if(x%2==1)
       {
       	 printf("%d ",x);
	   }
	}
	
}