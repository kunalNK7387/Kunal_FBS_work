#include<stdio.h>
int primeNumber();
void main(){
	int a= primeNumber();
	if(a==1){
	
		printf("no is prime number \n ");
	}else{
			printf("no is  not prime number \n ");
	}
}
	
int primeNumber(){

	int no,i,isPrime=1;
	printf("Enter the number:");
	scanf("%d",&no);
	
	if(no<=1){
		isPrime=0;
		
	}else{
		for(i=2;i<=no/2;i++){
			if(no%i==0){
				isPrime=0;
				break;
			}
		}
	}
	if(isPrime){
	return 1;
}
}