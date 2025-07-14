#include<stdio.h>
void main() {
	int a,b,res;
	char oprtator ;

	printf("Enter the first number:");
	scanf("%d",& a);

	printf("Enter the second number:");
	scanf("%d",& b);
	
	fflush(stdin);

	printf("Enter the oprtator (+,-,*,/,%):");
	scanf("%c",& oprtator);

	if(oprtator=='+') {
		res=a+b;
		printf("%d",res);
	}else if(oprtator=='-') {
		res=a-b;
		printf("%d",res);
	}else if(oprtator=='*') {
		res=a*b;
		printf("%d",res);
	}else if(oprtator=='/') {
		res=a/b;
		printf("%d",res);
	}else if(oprtator=='%') {
		res=a%b;
		printf("%d",res);
	} else{
		printf("Enter the proper oprtator");
	}
}