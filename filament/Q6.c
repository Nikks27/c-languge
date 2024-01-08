#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	printf(" enter the ");
	gets(a);
	int l=strlen(a);
    
	int i,ch=0,k,j;
	
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if (a[i]==a[j])
			{
				for(k=j;k<l;k++)
				{
					a[k]=a[k+1];
				}
			}
		}
	}
	puts(a);
}
