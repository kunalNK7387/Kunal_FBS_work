#include<stdio.h>
void operation(int,int,char);
void main(){
	int a,b;
	char oprtator ;

	printf("Enter the first number:");
	scanf("%d",& a);

	printf("Enter the second number:");
	scanf("%d",& b);
	
	fflush(stdin);

	printf("Enter the oprtator (+,-,*,/,%):");
	scanf("%c",& oprtator);
	operation(a,b,oprtator);
}
void operation(int a ,int b, char oprtator){
	int res;

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
	printf("invalid choise");
	}
}