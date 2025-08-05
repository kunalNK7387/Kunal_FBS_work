int vowel(char*);
void main() {
	char str[50];
	char str1[50];
	printf("enter String :");
	gets(str);
	int j=0;
	int i=0;
	while(str[i]!='\0'){
		if(i%2!=0){
			str1[j++]=str[i];
		}
		i++;
	}
	printf("%s",str1);
}