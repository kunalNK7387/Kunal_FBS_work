int caseUpperlower(int );
void main(){
	int ch;

	printf("Enter the ch:");
	scanf("%c",&ch);
	int a= caseUpperlower(ch);
	if(a==1){
	
	printf("Upper case");
	}else{
		printf ("lower case");
	}
}
int caseUpperlower(int ch){

	
	
	if(ch>='A'&& ch<='Z'){
		return 1;
	}
		
}