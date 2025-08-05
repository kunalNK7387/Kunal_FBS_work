void main() {
	char str[100];
	printf("Enter the string:");
	gets(str);
	
	char* tok =strtok(str," ");// in this (" ")this means we sets the limits eg we seprate the tockens by space
	printf("%s",tok);

	int word=0;
	while(tok!='\0'){
	
			word++;
		
		tok=strtok('\0'," ");
		
	}
	
	/*
	int i=0;
	while(str[i]!='\0') {
		if((str[i]!=' ' && str[i]!='\n' )&&(i==0||str[i-1]==' '||str[i-1]=='\0')){

			word++;
		}
		i++;
	}
*/
	printf("number of words in string:%d",word);
}