#include<stdio.h>
int Factorial(int);
void main() {
	int no;
	printf("Enter The number: ");
	scanf("%d", &no);
	int a= Factorial(no);
	printf("%ld",a);
}
int Factorial(int no) {
	long res=1;
	if(no<0) {
		printf("Factorial not exist");
	} else {
		for(int i=1; i<=no; i++) {
			res=res*i;
		}
		return res;

	}

}