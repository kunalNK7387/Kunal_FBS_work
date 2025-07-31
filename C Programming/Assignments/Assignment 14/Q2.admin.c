#include<stdio.h>
struct admin {
	int id;
	char name[20];
	int salary;
	int allowance;
};
int main() {
	struct admin s1;
	struct admin s2;

	printf("Enter the id:");
	scanf(" Id %d:",&s1.id);
	fflush(stdin);

	printf("Enter the name :");
	gets(s1.name);

	printf("Enter the salary:");
	scanf(" salary %d:",&s1.salary);
	fflush(stdin);

	printf("Enter the allowance:");
	scanf(" Allowance %d:",&s1.allowance);

	printf("Enter the info of 2nd Admin\n");
	fflush(stdin);
	printf("Enter the id:");
	scanf(" Id %d:",&s2.id);
	fflush(stdin);

	printf("Enter the name :");
	gets(s2.name);

	printf("Enter the salary:");
	scanf(" salary %d:",&s2.salary);
	fflush(stdin);

	printf("Enter the allowance:");
	scanf(" Allowance %d:",&s2.allowance);
	return 0;
}