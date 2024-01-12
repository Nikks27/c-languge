#include<stdio.h>

//Q.1 Write a Program to create Student Record System for 3 students using structure.
// Consider the below-mentioned attributes in the Student structure:

struct Student
{
	int stu_id,stu_age,stu_standard;
	char stu_school[100];
	char stu_city[20];
	char stu_course[50];
	char stu_name[50];
}
main()
{
	char stu_school[100];
	char stu_city[20];
	char stu_course[50];
	char stu_name[50];
	
	struct Student Student_num[3];
	
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("Student %d Information !!!\n\n",i+1);
		
		printf("Enter the id : ");
		scanf("%d",&Student_num[i].stu_id);
		
		printf("Enter the name : ");
		scanf("%s",&stu_name);
		strcpy(Student_num[i].stu_name,stu_name);
		
		printf("Enter the age : ");
		scanf("%d",&Student_num[i].stu_age);
		
		printf("Enter the course : ");
		scanf("%s",&stu_course);
		strcpy(Student_num[i].stu_course,stu_course);
		
		printf("Enter the city : ");
		scanf("%s",&stu_city);
		strcpy(Student_num[i].stu_city,stu_city);
		
		printf("Enter the standard : ");
		scanf("%d",&Student_num[i].stu_standard);
		
		printf("Enter the school : ");
		scanf("%s",&stu_school);
		strcpy(Student_num[i].stu_school,stu_school);
		printf("\n\n");
		
		printf("Student %d Information !!!\n\n",i+1);
		printf("Student id is : %d\n",Student_num[i].stu_id);
		printf("Student name id is : %s\n",Student_num[i].stu_name);
		printf("Student age is : %d\n",Student_num[i].stu_age);
		printf("Student Course is : %s\n",Student_num[i].stu_course);
		printf("Student city is : %s\n",Student_num[i].stu_city);
		printf("Student Standerd is : %d\n",Student_num[i].stu_standard);
		printf("Student School Name is : %s",Student_num[i].stu_school);
		printf("\n\n");
	}
	
}
