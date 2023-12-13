#include<stdio.h>


main()
{
    char title [20] = "RABari naresh";
	int length = strlen (title);
	
	if(title [0]>=97 && title [0]<=122)
	{
		title [0] = title [0] -32;
	}	
	int i;
	for(i=1; i<length; i++)
	{
		if(title [i-1]==' ')
		{
			if(title [i]>=97 && title [i]<=122)
			{
				title [i] = title [i] -32;
			}
		}
		else if (title [i]>=65 && title [i]<=90)
		{
			title [i] = title [i] +32;
		}
		else if (title [i] == ' ')
		{
			if(title [i]>=97 && title [i]<=122)
			{
				title [i+1] = title [i+1] -32;
			}
		}
	}
	puts (title);
}
