void table(int );
void main() {
	int a=5;

	table(a);
}
void table(int a) {


	int d;
	int i=1;
	while (i<=10) {
		d=a*i;
		printf("%d \n",d);
		i++;
	}
}