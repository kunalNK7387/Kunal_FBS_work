void caseUpperlower();
void main(){
	caseUpperlower();
}
void caseUpperlower(){

	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z'){
		printf("Upper case");
	}else{
		printf ("lower case");
	}
}