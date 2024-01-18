#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *even;
    even = fopen("even.txt","w");
    FILE *odd;
    odd = fopen("odd.txt","w");
    int i,n,n1;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("enter the value of n : ");
    scanf("%d",&n1);
    fprintf(even,"Even numbers between 50 to 70 : \n");
    fprintf(odd,"Odd numbers between 50 to 70 : \n");
    for(i=n; i<=n1; i++)
    {
        if(i%2==0)
        {
            fprintf(even,"%d ",i);
        }
        else
        {
            fprintf(odd,"%d ",i);
        }
    }
}
