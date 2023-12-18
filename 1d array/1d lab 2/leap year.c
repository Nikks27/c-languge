 #include<stdio.h>

void main()
{
	int i,x,y,size,num=0;

	
	printf("Enter the value of 1st number : ");
	scanf("%d",&x);
	
	printf("Enter the value of 2nd number : ");
	scanf("%d",&y);
	
	size = y - x;
	size= size /4+1;

	int a[size];
	
    for(i=x; i<=y; i++)
    {
    	if(i%4==0)
    	{
    		a[num] = i;
            num++;
		}
	}
	printf("\n");
	
    for(i=0; i<num; i++) 
   {
   	printf("%d ",a[i]);
   }
}

