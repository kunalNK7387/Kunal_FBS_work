#include<stdio.h>
int checkVowels(int );
void main() {
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	int a=checkVowels(ch);
	if(a==1) {

		printf("the ch is vowels.");
	} else {
		printf("the ch is not vowels.");
	}
}
int checkVowels(int ch) {

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {

		return 1;
	}


}