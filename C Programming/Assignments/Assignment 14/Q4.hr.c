#include<stdio.h>
struct hr {
	int id;
	char name[20];
	int salary;
	int commission;
};
void main() {

	struct hr s1;
	struct hr s2;
	printf("1st hr\n");

	printf("Enter the id:");
	scanf(" Id %d:",&s1.id);
	fflush(stdin);

	printf("Enter the name :");
	gets(s1.name);

	printf("Enter the salary:");
	scanf(" salary %d:",&s1.salary);
	fflush(stdin);

	printf("Enter the commission:");
	scanf("%d",&s1.commission);



	printf("2nd hr\n");

	printf("Enter the id:");
	scanf(" Id %d:",&s2.id);
	fflush(stdin);

	printf("Enter the name :");
	gets(s2.name);

	printf("Enter the salary:");
	scanf(" salary %d:",&s2.salary);
	fflush(stdin);

	printf("Enter the commission:");
	scanf("%d",&s2.commission);

}