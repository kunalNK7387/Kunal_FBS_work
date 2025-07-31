#include<stdio.h>
char* mystrlower(char*);
void main() {
	char str[]="HELLO";

	mystrlower(str);
	printf("str= %s \n",str);

}
char*mystrlower(char*str) {
	for(int i=0; str[i]; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] =str[i]+32;
	}
}