#include<stdio.h>

int main()
{
	int months;
	printf("enter your months value :");
	scanf("%d",&months);
	switch(months)
	{
		case 1 :printf("January - 31 days");
		break;
		case 2 :printf("February - 28 days");
		break;
		case 3 :printf("March    - 28 days");
		break;
		case 4 :printf("April    - 31 days");
		break;	
		case 5 :printf("May	     - 30 days");
		break;
		case 6 :printf("June     - 31 days");
		break;
		case 7 :printf("July     - 30 days");
		break;
		case 8 :printf("August   - 31 days");
		break;
		case 9 :printf("September- 30 days");
		break;
		case 10 :printf("October - 31 days");
		break;
		case 11 :printf("November- 30 days");
		break;
		case 12 :printf("December- 31 days");
		break;
		default : printf("ERROR!!!!!");
	}
}
