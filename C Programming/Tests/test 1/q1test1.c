void main() {
	int hour,min,sec,totals;
	printf("Enter the time in hour:");
	scanf("%d",&hour);
	printf("Enter the time in min:");
	scanf("%d",&min);
	printf("Enter the time in sec:");
	scanf("%d",&sec);

	totals=(hour*3600)+(min*60)+sec;
	printf("the total time in sec %d",totals);

}