#include<stdio.h>

int main()
{
	printf("1 : hindi\n");
	printf("2 : english\n\n");
	int en;
	printf("enter your language?:");
	scanf("%d",&en);
	switch(en)
	{
		case 1 : printf("hindi\n\n");
			int x;
			printf("3 : Network error\n");
			printf("4 : Call error\n");
			printf("5 : Romeing error\n\n");
			printf("aapki problem kya hai ? type to 3,4,5 :");
			scanf("%d",&x);
			
		switch(x)
		{
			case 3 : printf("\nNetwork error");
			break;
			case 4 : printf("\ncall error");
			break;
			case 5 : printf("\nRomeing error");
			break;
		}		
	break;
		case 2 : printf("english\n");
			int y;
			printf("6 : Network error\n");
			printf("7 : Call error\n");
			printf("8 : Romeing error\n\n");
			printf("aapki problem kya hai ? type to 6,7,8 :");
			scanf("%d",&y);
			
		switch(y)
		{
			case 6 : printf("\nNetwork error");
			break;
			case 7 : printf("\ncall error");
			break;
			case 8 : printf("\nRomeing error");
			break;
		}
	}
}
