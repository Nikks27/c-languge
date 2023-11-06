#include<stdio.h>

int main()
{
	int  a,b,c,d,e;
	printf("enter your value :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//a,b,c,d,e
	if(a>b)
	{//a,c,d,e
		if(a>c)
		{//a,d,e
			if(a>d)
			{//a,e
				if(a>e)
				{
					printf("a is max");
				}
				else
				{
					printf("e is max");	
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");	
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf("e is max");	
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					printf("b is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");	
				}
			}
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");	
				}
				else
				{
					printf("e is max");	
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");	
				}
			}
		}
	}
}

