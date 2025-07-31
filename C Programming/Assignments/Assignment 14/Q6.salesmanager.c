#include<stdio.h>
struct SalesManager {
	int id;
	char name[50];
	int salary;
	int incentive;
	int target;

};
void main() {
	struct SalesManager s1,s2;
	printf("1st SalesManager\n");

	printf("Enter id:");
	scanf("%d",&s1.id);
	fflush(stdin);
	printf("Enter name:");
	scanf("%s",&s1.name);
	printf("Enter salary:");
	scanf("%d",&s1.salary);
	printf("Enter incentive:");
	scanf("%d",&s1.incentive);
	printf("Enter target:");
	scanf("%d",&s1.target);
	
	printf("2nd SalesManager\n");

	printf("Enter id:");
	scanf("%d",&s2.id);
	fflush(stdin);
	printf("Enter name:");
	scanf("%s",&s2.name);
	printf("Enter salary:");
	scanf("%d",&s2.salary);
	printf("Enter incentive:");
	scanf("%d",&s2.incentive);
	printf("Enter target:");
	scanf("%d",&s2.target);
}