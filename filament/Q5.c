#include<stdio.h>
#include<string.h>

main()
{
   char a[20];
   printf(" enter the : ");
   gets(a);

   int l=strlen(a);
   char b[l];
   int i,ch=0;
   
   for(i=0;i<l;i++)
   {
   	  b[i]=a[i];
   }
  puts(b);
}
