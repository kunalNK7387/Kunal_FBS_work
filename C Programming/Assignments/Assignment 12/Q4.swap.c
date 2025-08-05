void main() {
	char str[10];
	printf("Enter the string:",str);
	gets(str);
	int size=strlen(str);
	char temp=str[0];
	str[0]=str[size-1];
	str[size-1]=temp;
	printf("After swap %s",str);
}