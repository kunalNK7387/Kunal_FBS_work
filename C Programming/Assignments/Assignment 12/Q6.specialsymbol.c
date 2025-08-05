int vowel(char*);
void main() {
	char str[50];
	printf("enter String :");
	gets(str);
	
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]='$';
		}
		i++;
	}
	printf("%s",str);
}