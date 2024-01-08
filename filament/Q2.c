#include<stdio.h>
#include<string.h>


main()
{
	char a[50];
	
	printf(" enter the ");
	gets(a);
	int l=strlen(a);
	int i,j;
	
int check=1;
for(i=0;i<l;i++)
{
   check=1;
      for(j=i+1;j<l;j++)
      {
             if(a[i]==a[j])
           {
           	    check++;
                 a[j]=-1;

           }    
     } 
   if(a[i]!=-1)
    {
        printf("%c %d\n",a[i],check);
    }
}
}
