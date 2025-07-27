#include<stdio.h>
int evenOdd();
void main() {
	int a = evenOdd();
	if(a==1){
		printf("even");
	}else{
		printf("odd");
	}

}
int evenOdd() {

	int no=4;
	
	if(no%2==0) {
		
		return 1;
	}
}