#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	int i,j,k,x;
	
	printf("Enter the char. : ");
	gets(a);
	
	int len = strlen(a);
	
	printf("After remove char is : ");
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i] == a[j])
			{	
				for(k=j; k<len-1; k++)
    			{
    				a[k] = a[k+1];
				}
				len--;
			}
		}
	}
	
	for(i=0; i<len; i++)
	{
		printf("%c",a[i]);
	}
}
