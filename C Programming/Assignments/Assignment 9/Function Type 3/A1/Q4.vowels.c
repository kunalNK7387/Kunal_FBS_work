#include<stdio.h>
void checkVowels(int*,int );
void main() {
	int ch[4]={'a','S','C','u'};
	for(int i=0;i<4;i++){
		printf("The char [%c] \n",ch[i]);
	}
	int size=sizeof(ch)/sizeof(ch[0]);
	checkVowels(ch,size);
}
void checkVowels(int* ch,int size) {
	for(int i=0; i<size; i++) {

		if(ch[i] =='a'|| ch[i] =='e'|| ch[i] =='i'|| ch[i] =='o'|| ch[i] =='u'|| ch[i] =='A'|| ch[i] =='E'|| ch[i] =='I'|| ch[i] =='O'|| ch[i] =='U') {
			printf("the ch is vowels.");
		} else {
			printf("the ch is not vowels.");
		}
	}

}