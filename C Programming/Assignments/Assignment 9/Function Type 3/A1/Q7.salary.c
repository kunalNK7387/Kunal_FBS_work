void salary(double*,int);
void main() {
	double bs[3]= {7000,5000,9000};
	for (int i=0; i<3; i++) {
		printf("The char [%lf] \n",bs[i]);
	}
	int size=sizeof(bs)/sizeof(bs[0]);
	salary(bs,size);
}
void salary(double* bs,int size) {

	for (int i=0; i<size; i++) {

		double da,ta,hra,ts;
		if(bs[i] <=5000) {
			da=bs[i]*0.10;
			ta=bs[i]*0.20;
			hra=bs[i]*0.25;
		} else {
			da=bs[i]*0.15;
			ta=bs[i]*0.25;
			hra=bs[i]*0.30;
		}
		ts=da+ta+hra;
		printf("Total salary is : %lf \n",ts);
	}
}