#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	printf("Enter the string : ");
	scanf("%s",&a);
	
	int len = strlen(a);
	int *ptr = len;
	
	printf("%d",ptr);
}
