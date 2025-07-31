void howOldYou(int*);
void main() {
	int age[2];
	for(int i=0; i<2; i++) {

		printf("Enter the age: ",i);
		scanf("%d",& age[i]);
	}
	howOldYou(age);
}
void howOldYou(int* age) {
	for(int i=0; i<2; i++) {
		if(age[i]>60) {
			printf("Senior.\n");
		} else if(age[i]>=20&& age[i]<=59) {
			printf("Adult.\n");
		} else if(age[i]>=12&& age[i]<=19) {
			printf("Teenager.\n");
		} else if(age[i]<12) {
			printf("child.\n");
		} else {
			printf("Please enter the age.");
		}
	}
}