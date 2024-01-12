#include<stdio.h>
#include<string.h>

//Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. 
//Consider the below-mentioned attributes in the Employee structure:

struct Emp
{
	int  emp_id,emp_age,emp_experience;
	char emp_company_name[100];
	char emp_city[20];
	char emp_role[50];
	char emp_name[50];
}
main()
{
	char emp_company_name[100];
	char emp_city[20];
	char emp_role[50];
	char emp_name[50];
	
	int n;
	printf("Enter the your employee Member : ");
	scanf("%d",&n);
	
	struct Emp Emp_num[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Student %d Information !!!\n\n",i+1);
		printf("Enter the id : ");
		scanf("%d",&Emp_num[i].emp_id);
		
		printf("Enter the name : ");
		scanf(" %s",&emp_name);
		strcpy(Emp_num[i].emp_name,emp_name);
		
		printf("Enter the age : ");
		scanf("%d",&Emp_num[i].emp_age);
		
		printf("Enter the employee role : ");
		scanf("%s",&emp_role);
		strcpy(Emp_num[i].emp_role,emp_role);
		
		printf("Enter the city : ");
		scanf("%s",&emp_city);
		strcpy(Emp_num[i].emp_city,emp_city);
		
		printf("Enter the employee experience : ");
		scanf("%d",&Emp_num[i].emp_experience);
		
		printf("Enter the employee company name : ");
		scanf("%s",&emp_company_name);
		strcpy(Emp_num[i].emp_company_name,emp_company_name);
		printf("\n\n");
		
		printf("Employee %d Information !!!\n\n",i+1);
		printf("Employee id is : %d\n",Emp_num[i].emp_id);
		printf("Employee name id is : %s\n",Emp_num[i].emp_name);
		printf("Employee age is : %d\n",Emp_num[i].emp_age);
		printf("Employee role is : %s\n",Emp_num[i].emp_role);
		printf("Employee city is : %s\n",Emp_num[i].emp_city);
		printf("Employee Standerd is : %d\n",Emp_num[i].emp_experience);
		printf("Employee company Name is : %s",Emp_num[i].emp_company_name);
		printf("\n\n");
	}
	
}
