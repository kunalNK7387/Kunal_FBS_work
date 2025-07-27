#include<stdio.h>
int Factorial();
void main(){
	int a= Factorial();
		printf("%ld",a);
}
int Factorial(){

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
	return res;
	
	}
	
}