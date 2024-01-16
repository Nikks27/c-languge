#include<stdio.h>
main()
{
	FILE *fp;
    fp=fopen(" bio data.html","w");
    char ad[20];
	char name[20];
	char gd[20];
	printf(" entr the name : ");
	gets(name);
	printf(" entr the address : ");
	gets(ad);
	printf(" entr the gender : ");
	gets(gd);
	int age;
	printf(" entr the age : ");
    scanf(" %d",&age);
    int id;
	printf(" entr the id : ");
    scanf(" %d",&id);
    double nu ;
	printf(" entr the mobile no : ");
    scanf(" %lf",&nu);
	
	
	fprintf(fp," <html>");
    fprintf(fp," <head>");
    fprintf(fp," <title> bio data </title>");
    fprintf(fp," </head>");
    fprintf(fp," <body>");
    fprintf(fp,"  <center><h1> bio data </h1>");
    fprintf(fp," <p> name: %s </p>",name);
    fprintf(fp," <p> age: %d </p>",age);
    fprintf(fp," <p> gr id : %d </p>",id);
     fprintf(fp," <p> mobile no: %.0lf </p>",nu); 
     fprintf(fp," <p>  email address: %s </p>",ad);
     fprintf(fp," <p>  gender: %s </p></center>",gd);

    fprintf(fp," </body>");
	fprintf(fp," </html>");
}
