#include<stdio.h>
#include<string.h>

int Length_String(char a[])
{
	int l=strlen(a); 
	printf("LengthOfString :%d",l);
}
int main()
{
	char a[10]="sumitPati";
	Length_String(a);
}
