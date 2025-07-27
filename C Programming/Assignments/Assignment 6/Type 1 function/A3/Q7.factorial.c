#include<stdio.h>
void Factorial();
void main(){
	Factorial();
}
void Factorial(){

	int no;
	long res=1;
	printf("Enter The number: ");
	scanf("%d", &no);
	
	if(no<0){
		printf("Factorial not exist");
	}else{
		for(int i=1;i<=no;i++){
		res=res*i;
	}
	printf("%ld",res);
	
	}
	
}