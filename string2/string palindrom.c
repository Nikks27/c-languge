#include<stdio.h>
#include<string.h>

int main()
{
	int n; 
	
	printf("Enter the size of string : ");
	scanf("%d",&n);
	
    char a[n];
 	
 	printf("Enter the string : ");
 	scanf("%s",&a);
 	
    int l = 0;
    int h = strlen(a) - 1;
 
    
    while(h>l)
	{
	    if(a[l++] != a[h--])
		{
	        printf("%s is not a palindrome\n",a);
	    }
	}
 
    printf("%s is a palindrome\n",a);
}
