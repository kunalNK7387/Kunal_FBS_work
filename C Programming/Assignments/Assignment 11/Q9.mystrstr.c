#include <stdio.h>

char* mystrstr(char*, char*);

int main() {
	char str[20] = "hellohii";
	char str1[10] = "hii";
	char* result = mystrstr(str, str1);
	if (result) {
		printf(" found : %s\n", result);
	} else {
		printf("not found\n");
	}

	return 0;
}
char* mystrstr(char* str, char* str1) {
	if (*str1 == '\0') 
	return str;
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		while (str[i+j] !='\0' && str1[j]!='\0' && str[i+j]==str1[j]) {
			j++;
		}
		if (str1[j] == '\0') {
			return &str[i];
		}
	}

}
