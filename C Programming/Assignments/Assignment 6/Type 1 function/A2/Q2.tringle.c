#include<stdio.h>
void tringle();
void main(){
	tringle();
}
void tringle(){
	
	int a,b,c;
	printf("Enter the length of side a: ");
	scanf("%d",& a);
	
	printf("Enter the length of side b: ");
	scanf("%d",& b);
	
	printf("Enter the length of side c: ");
	scanf("%d",& c);
	
	if(a==b && a==c){
		printf("The trangle is equilateral.");
	}else if(a==b || a==c || b==c) {
		printf("The trangle is isosceles.");
	}else{
		printf("The trangle is scalene.");
	}
}

