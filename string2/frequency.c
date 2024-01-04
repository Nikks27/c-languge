#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	int i,j,count;
	
	printf("Enter the char. : ");
	gets(a);
	
	int len = strlen(a);
	
	for (i=0; i<len; i++)
    {
        count = 1;
        for (j=i+1; j<len; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = 1;
            }
        }
        if (a[j] != 1)
        {
            printf("%c -> %d\n", a[i], count);
        }
    
    }

}
