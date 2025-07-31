#include<stdio.h>
struct product {
	int id;
	char name[59];
	int quantity;
	int price;
};
void main(){
	struct product s1,s2;
	printf("product 1\n");
	printf("Enter id:");
	scanf("%d",&s1.id);
	
	fflush(stdin);
	printf("Enter name:");
	gets(s1.name);
	
	printf("Enter quantity:");
	scanf("%d ",&s1.quantity);
	
	printf("Enter price:");
	scanf("%d ",&s1.price);
	printf("product 2\n");
	printf("Enter id:");
	scanf("%d",&s2.id);
	
	fflush(stdin);
	printf("Enter name:");
	gets(s2.name);
	
	printf("Enter quantity:");
	scanf("%d ",&s2.quantity);
	
	printf("Enter price:");
	scanf("%d ",&s2.price);
}