#include<stdio.h>
#include<string.h>

main()
{
	char a[30],x[30];
	printf("enter your value :");
	gets(a);
	int l=0;
	strcpy(x,a);
	strrev(x);
	if(strcmp(a,x)==0)
	{
		printf("%s yes palindrome\n",a);
	}
	else
	{
		printf("%s not palindrome\n",a);
	}

}
