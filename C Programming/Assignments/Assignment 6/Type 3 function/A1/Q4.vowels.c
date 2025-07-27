#include<stdio.h>
void checkVowels(int );
void main() {
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	checkVowels(ch);
}
void checkVowels(int ch) {

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
		printf("the ch is vowels.");
	} else {
		printf("the ch is not vowels.");
	}


}