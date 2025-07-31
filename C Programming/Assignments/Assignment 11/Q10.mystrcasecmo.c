char flip (char);
int mystrcasecmp(char*,char*);
void main() {
    char str1[] = "Hello";
    char str2[] = "heLLo";
    int a = mystrcasecmp(str1, str2); 
	if(a == 0){
		printf("string equal");
	}else{
		printf("String not equal");
	}
}
int mystrcasecmp(char* s1,char* s2) {
    if(strlen(s1)!=strlen(s2))
    return 1;
    
    int i=0;
    while (s1[i]!='\0'){
    	if(s1[i]!=s2[i] && s1[i]!=flip(s2[i])){
    		return 1;
    		i++;
		}
		return 0;
	}
}
char flip(char ch){
	if(ch>='A' && ch<='Z')
	return ch+32;
	else
	return ch-32;
}