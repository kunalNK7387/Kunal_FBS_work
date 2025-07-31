#include<stdio.h>
struct Employee {
	int id;
	char name[20];
	double salary;
};
void main() {
	struct Employee s1;
	struct Employee s2;
	printf("Enter the information of 1st employee\n ");
	printf("Enter the id of employees:");
	scanf("Employee Id %d:",&s1.id);

	fflush(stdin);

	printf("Enter the name of employees:");
	gets(s1.name);

	printf("Enter the salary of employees:");
	scanf("Employee salary %fl:",&s1.salary);

	printf("Enter the information of 2nd employee\n ");
	fflush(stdin);
	
	printf("Enter the id of employees:");
	scanf("Employee Id %d:",&s2.id);
	fflush(stdin);


	printf("Enter the name of employees:");
	gets(s2.name);

	printf("Enter the salary of employees:");
	scanf("Employee salary %fl:",&s2.salary);
}