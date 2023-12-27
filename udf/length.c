#include<stdio.h>
#include<string.h>
#include<string.h>
int length(char a[])
{
	int l=strlen(a);
	printf("length of string : %d",l);
}
main()
{
	char a[15]="nareshrabari";
	length(a);
}
