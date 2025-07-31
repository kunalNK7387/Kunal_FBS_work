int mystrncasecmp(char*,char*,int);
char flip (char);
void main() {
	char str1[] = "Hello";
	char str2[] = "hillo";
	int a = mystrncasecmp(str1, str2,3);
	if(a == 0) {
		printf("string equal");
	} else {
		printf("String not equal");
	}
}
int mystrncasecmp(char* s1,char* s2,int n) {
	if(strlen(s1)!=strlen(s2))
	{
		return 1;
		}	

	int i=0;
	while (i<n) {
		if(s1[i]!=s2[i] && s1[i]!=flip(s2[i])) 
			return 1;
			
		i++;
		
	}
	return 0;

	
}
char flip(char ch) {
		if(ch>='A' && ch<='Z')
			return ch+32;
		else
			return ch-32;
	}