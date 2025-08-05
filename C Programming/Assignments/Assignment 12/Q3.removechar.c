void main() {
	char str[10];
	printf("Enter the string:",str);
	gets(str);
	int n;
	printf("Enter the nth index");
	scanf("%d",&n);

	int size=strlen(str);
	if(size==0) {
		printf("The string is empty");
	} else {
		for (int i = n; i < size; i++) {
			str[i] = str[i + 1];
		}

	}


	printf("%s",str);
}