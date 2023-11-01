#include<stdio.h>

main()
{
	int x,y,ans;
	printf("enter your value:");
	scanf("%d%d",&x,&y);
	
	ans=x*x-2*x*y-y*y;
	printf("ans is a:%d",ans);
	
}