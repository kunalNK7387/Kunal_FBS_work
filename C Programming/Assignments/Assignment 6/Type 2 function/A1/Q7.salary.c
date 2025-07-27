double salary();
void main(){
	double a=salary();
		printf("Total salary is : %lf",a);	
}
double salary(){

	double bs= 7000;
	double da,ta,hra,ts;
	if(bs<=5000){
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
	}
	else{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	ts=da+ta+hra;
	return ts;

	
}