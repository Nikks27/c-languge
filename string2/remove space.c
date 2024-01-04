#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	int i,j;
	
	printf("Enter the char. : ");
	gets(a);
	
	int len = strlen(a);
	
	for (i=0; i<len; i++)
    {
       	if (a[i] == ' ')
       	{
            for(j=i; j<len; j++)
            {
                a[j] = a[j+1];
            }
            len--;
            i--;   	
    	}
    }
	puts(a);
}
