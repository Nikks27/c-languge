#include<stdio.h>

main()
{
	int x=1,n=50,sum=0;
	start:
	if(x<=n)
	{
		x++;
		if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0 || x==2 || x==3 || x==5 || x==7)
		{
			printf(" %d",x);
			sum=sum+x;
			
		}
		goto start;
	}
	printf("\n\nsum is : %d\n ",sum);
}