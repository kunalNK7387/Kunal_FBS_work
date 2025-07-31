#include<stdio.h>
struct student{
	int rollno;
	char name[10];
	int marks;
};
void main(){
	struct student s1;
	struct student s2;
	struct student s3;
	
	printf("1st student\n");
	
	printf("Enter roll no.:");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	printf("name .:");
	gets(s1.name);
	
	printf("Enter marks.:");
	scanf("%d",&s1.marks);
	
	printf("2nd student\n");
	
	printf("Enter roll no.:");
	scanf("%d",&s2.rollno);
	fflush(stdin);
	printf("Enter name.:");
	gets(s2.name);
	
	printf("Enter marks.:");
	scanf("%d",&s2.marks);
	
	printf("3rd student\n");
	
	printf("Enter roll no.:");
	scanf("%d",&s3.rollno);
	fflush(stdin);
	printf("Enter name.:");
	gets(s3.name);
	
	printf("Enter marks.:");
	scanf("%d",&s3.marks);
}