#include<stdio.h>
main()
{
	char  w;
	printf(" enter the value of week:");
	scanf("%c",&w);
	
	switch(w)
	{
		case 'S':printf(" sunday ");
		break;
		case 'M':printf("monday ");
		break;
		case 'T':printf(" thueday");
		break;
		case 'w':printf(" wednesday");
		break;
		case 't':printf("thuesday ");
		break;
		case 'F':printf("friaday ");
		break;
		case 's':printf("saturday ");
		break;
		default:printf(" error");
	}
}
