#include<stdio.h>
#include<string.h>

main()
{
   char a[20];
   printf(" enter the ");
   gets(a);
    char b[20];
   printf(" enter the ");
   gets(b);
   int l=strlen(a);
   int i,j,ch=0;
   
   for(i=0;i<l;i++)
   {
   	ch=0;
   	for(j=0;j<l;j++)
   	{
   		if(a[i]==b[i])
   		{
   			ch=1;
		}
	}
   }
   if(ch==1)
   {
   	printf("same ");
   }
   else
   {
   	printf("not same");
   }	   	
}
