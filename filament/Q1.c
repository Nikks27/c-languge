#include<stdio.h>
#include<string.h>


main()
{
	char a[20];
	printf(" enter the ");
	gets(a);
	int l=strlen(a);
     l=l-1;
	int i,ch=0;
	
	for(i=0;i<l;i++)
	{
        if (a[l]!=a[ch])
		{
			ch=1;
		}
	}
	if (ch==0)
	{
		printf(" its pelidrom " );
	}
	else
	{
		printf(" not  pelidrom ");
	}
	
}
