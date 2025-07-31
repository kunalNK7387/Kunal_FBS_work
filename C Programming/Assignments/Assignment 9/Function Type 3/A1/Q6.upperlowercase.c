void caseUpperlower(int*,int);
void main(){
	int ch[4]={'a','C','x','Q'};
	for(int i=0;i<4;i++){
		printf("The char [%c] \n",ch[i]);
	}
	int size=sizeof(ch)/sizeof(ch[0]);
	caseUpperlower(ch,size);
}
void caseUpperlower(int* ch,int size){
	for(int i=0; i<size; i++) {
	
	if(ch[i] >='A'&& ch[i]<='Z'){
		printf("Upper case\n");
	}else{
		printf ("lower case\n");
	}
}
}