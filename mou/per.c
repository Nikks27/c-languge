#include<stdio.h>
main()
{
	int m,p,s,b;
	printf(" enter the marks");
	scanf(" %d%d%d%d",&m,&p,&s,&b);
	
	int total=p+m+s+b;
	int per=total/4;
	printf(" your  percentage %d",per);
	
	if(per<100 && per>90)
	{
		printf(" a");
		
	}
	else if( per<89 && per>80)
	{
		printf(" b");
		
	}
	else if (per<79 && per>70)
	{
		printf(" c");
	}
	else if( per <69 && per>60)
	{
		printf("d");
	}
	else if( per <59 && per>50)
	{
		printf(" e ");
	}
	else if(per<49 && per >40 )
	{
		printf(" f");
	}
	else if(per<39)
	{
		printf(" faild");
	}
}
