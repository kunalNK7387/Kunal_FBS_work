#include<stdio.h>
void Factorial(int);
void main(){
	int no;
	
	printf("Enter The number: ");
	scanf("%d", &no);
	
	Factorial(no);
}
void Factorial(int no){

	long res=1;
	
	if(no<0){
		printf("Factorial not exist");
	}else{
		for(int i=1;i<=no;i++){
		res=res*i;
	}
	printf("%ld",res);
	
	}
	
}