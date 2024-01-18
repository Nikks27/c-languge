#include<stdio.h>
#include<string.h>

struct student
{
	int rollno,Chemistry, Mathematics, Physics ;
	char name[50];
};

int main()
{
	struct student s[5];
	char name[100];
 	int i,ans;
 	float result;
 	
 	for(i=0; i<5; i++)
 	{
 		printf("\n\nEnter the details for student : %d",i+1);
 		
		printf("\nEnter the name of student : ");
		scanf(" %[^\n]s",&s[i].name);
		
		printf("\nEnter the roll no of student  : ");
		scanf("%[^\n]d",&s[i].rollno);
		
		printf("\nChemistry marks : ");
		scanf("%[^\n]d",&s[i].Chemistry);
		
		printf("\nMathematics marks: ");
		scanf("%[^\n]d",&s[i].Mathematics);
		
		printf("\nPhysics marks : ");
		scanf("%[^\n]d",&s[i].Physics);
	}
	
 	for(i=0; i<5; i++)
 	{
 		printf("\n\nThe Student %d result is below\n",i+1);
 		printf("%s(%d)\n",s[i].name,s[i].rollno);
 		printf("Chemistry   : %d\n",s[i].Chemistry);
 		printf("Mathematics : %d\n",s[i].Mathematics);
 		printf("Physics     : %d\n",s[i].Physics);
 		ans = s[i].Chemistry + s[i].Mathematics + s[i].Physics;
 		printf("Total       : %d/300\n",ans);
 		result = (ans*100.0)/300;
 		printf("Percent     : %.2f%%",result);
	} 
 	
 	return 0;
}
