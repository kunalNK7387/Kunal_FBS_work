void caseUpperlower(int);
void main(){
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	caseUpperlower(ch);
}
void caseUpperlower(int ch){

	
	
	if(ch>='A'&& ch<='Z'){
		printf("Upper case");
	}else{
		printf ("lower case");
	}
}