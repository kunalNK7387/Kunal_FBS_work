int mystrlen(int*);
void main() {
	char str[100];
	printf("Enter the 1st string:");
	gets(str);
	char str1[100];
	printf("Enter the 2nd string:");
	gets(str1);

	int a=mystrlen(str);
	int b=mystrlen(str1);

	if(a>b) {
		printf("String 1 is greater ");
	} else {
		printf("String 2 is greater ");
	}

}
int mystrlen(int* str) {
	int i=0;
	int count=0;
	while(str[i]!='\0') {
		count++;

		i++;
	}
	return count;
}
