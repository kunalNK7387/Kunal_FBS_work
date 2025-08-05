#include <stdio.h>
#include <string.h>
typedef struct Storeinfo {
	char username[100];
	char password[100];
} Storeinfo;

Storeinfo getdata();
int verifyinfo(char*, char*, char*, char*);

void main() {
	Storeinfo s1;

	s1 = getdata();

	printf("\n");
	char tempuser[100];
	char passtemp[100];

	printf("Enter User name: ");
	gets(tempuser);

	printf("Enter Password: ");
	gets(passtemp);

	int a = verifyinfo(s1.username, s1.password, tempuser, passtemp);

	if (a == 0) {
		printf("Username and Password are not correct.\n");
	} else {
		printf("Your Username and Password are verified.\n");
		int chach = 12345;
		int temp;
		printf("Enter Capture to Verify RObot(%d):",chach);
		scanf("%d",&temp);
		if(chach == temp){
			printf("You Successfully Login");
		}else{
			printf("enter Valid Capture");
		}
	}
}

int verifyinfo(char* username, char* password, char* tempuser, char* passtemp) {
	if (strcmp(username, tempuser) == 0 && strcmp(password, passtemp) == 0) {
		return 1;
	}
	return 0;
}

Storeinfo getdata() {
	Storeinfo temp;
	printf("Enter username to store: ");
	gets(temp.username);
	printf("Enter password to store: ");
	gets(temp.password);
	return temp;
}