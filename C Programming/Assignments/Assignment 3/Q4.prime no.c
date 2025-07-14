#include<stdio.h>
void main(){
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
		printf("%d is prime number \n ",no);
	}else{
			printf("%d is  not prime number \n ",no);
	}
}