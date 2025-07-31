#include<stdio.h>
void operation(int*,int*,char*);
void main() {
	int a[3],b[3];
	char oprtator[3];
	for(int i=0; i<3; i++) {

		printf("Enter the first number:",i);
		scanf("%d",& a[i]);

		printf("Enter the second number:",i);
		scanf("%d",& b[i]);

		fflush(stdin);

		printf("Enter the oprtator (+,-,*,/,%):",i);
		scanf("%c",& oprtator[i]);
	}
	operation(a,b,oprtator);
}
void operation(int* a,int* b, char* oprtator) {

	for(int i=0; i<3; i++) {
		int res;
		if(oprtator[i]=='+') {
			res=a[i] + b[i];
			printf("%d \n",res);
		} else if(oprtator[i]=='-') {
			res=a[i]  - b[i];
			printf("%d\n",res);
		} else if(oprtator[i]=='*') {
			res=a[i]  * b[i];
			printf("%d\n",res);
		} else if(oprtator[i]=='/') {
			res=a[i]  / b[i];
			printf("%d\n",res);
		} else if(oprtator[i]=='%') {
			res=a[i]  % b[i];
			printf("%d\n",res);
		} else {
			printf("invalid choise");
		}
	}
}