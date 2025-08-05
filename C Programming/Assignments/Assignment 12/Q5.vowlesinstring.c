int vowel(char*);
void main() {
	char str[10];
	printf("enter String :");
	scanf("%s",&str);

	int a=vowel(str);
	printf("%d",a);
}
int vowel(char* str) {
	int count=0;
	int size = strlen(str);
	for(int i = 0; i<=size; i++) {

		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
			count++;
		}
	}
	return count;
}