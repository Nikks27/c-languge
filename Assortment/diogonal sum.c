#include<stdio.h>

main()
{
	int n,m;
	printf("Enter the value of row : ");
	scanf("%d",&n);
	printf("Enter the value of column : ");
	scanf("%d",&m);
	
	int a[n][m];
	int b[n][m];
	int sum = 0;
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		sum = sum + a[i][i];
	}
	printf("\nDiagonal Sum = %d",sum);
}
