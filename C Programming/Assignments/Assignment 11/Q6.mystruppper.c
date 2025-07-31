#include<stdio.h>
char* mystrupper(char*);
void main() {
	char str[]="hello";

	mystrupper(str);
	printf("str= %s \n",str);

}
char*mystrupper(char*str) {
	for(int i=0; str[i]; i++) {
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] =str[i]-32;
	}
}