void voting(int*,int);
void main() {
	int age[4];
	for (int i=0; i<4; i++) {
		printf("Enter you age:",i);
		scanf("%d",&age[i]);
	}
	int size=sizeof(age)/sizeof(age[0]);
	voting(age,size);
}
void voting(int* a,int size) {
	for (int i=0; i<size; i++) {

		if(a[i] >=18) {
			printf("Person is eligible for voting\n");
		} else {
			printf("Person is not eligible for voting\n");
		}
	}
}