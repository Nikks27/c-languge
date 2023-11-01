#include<stdio.h>

main()
{
	int x,y,ans;
	printf("enter your value:");
	scanf("%d%d",&x,&y);

	ans=x*x*x+3*x*x*y+3*x*y*y+y*y*y;
	printf("ans is a:%d",ans);
		
}