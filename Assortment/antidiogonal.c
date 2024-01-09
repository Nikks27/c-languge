#include<stdio.h>

main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j=2,sum=0;
	
	for(i=0; i<3; i++)
	{
		sum = sum + a[i][j];
		j--;
	}
	printf("antidiagonal sum is %d",sum);
}
