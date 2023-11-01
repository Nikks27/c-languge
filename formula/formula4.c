#include<stdio.h>

main()

{
	int x,y,z,ans;
	printf("enter your value:");
	scanf("%d%d%d",&x,&y,&z);
	
	ans=x*x*x+y*y*y+z*z*z+
	3*x*x*y-3*x*y*y+3*y*y*z+3*y*z*z-3*x*z*z+3*x*x*z
	-6*x*y*z;
	printf("ans is a:%d",ans);
	
}