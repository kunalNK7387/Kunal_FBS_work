#include<stdio.h>
int evenOdd(int);
void main() {
	int no=4;
	int a = evenOdd(a);
	if(a==1) {

		printf("even");

	} else {
		printf("odd");
	}

}
int evenOdd(int no) {


	if(no%2==0) {
		return 1;

	}
}