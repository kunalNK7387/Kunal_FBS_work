int caseUpperlower();
void main(){
	int a= caseUpperlower();
	if(a==1){
	
	printf("Upper case");
	}else{
		printf ("lower case");
	}
}
int caseUpperlower(){

	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z'){
		return 1;
	}
		
}