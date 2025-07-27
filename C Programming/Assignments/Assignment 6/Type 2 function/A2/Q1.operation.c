#include<stdio.h>
int operation();
void main(){
	int a=operation();
	printf("%d",a);
}
int operation(){
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
		
	}else if(oprtator=='-') {
		res=a-b;
		
	}else if(oprtator=='*') {
		res=a*b;
	
	}else if(oprtator=='/') {
		res=a/b;
		
	}else if(oprtator=='%') {
		res=a%b;
		
	} else{	
	printf("invalid choise");
	}
	return res;
}