#include<stdio.h>
int checkVowels();
void main() {
    int a=checkVowels();
    if(a==1){
	
    	printf("the ch is vowels.");
		}
		else{
			printf("the ch is not vowels.");
		}
}
int checkVowels(){

	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);

	
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
		
		return 1;
	}


}