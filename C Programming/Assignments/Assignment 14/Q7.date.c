struct Date {
	int date;
	int month;
	int year;
};
void main() {
	struct Date s1,s2;

	printf("Enter the date:");
	scanf("%d",&s1.date);
	printf("Enter the month:");
	scanf("%d",&s1.month);
	printf("Enter the year:");
	scanf("%d",&s1.year);
	printf("||2nd date||\n");
	printf("Enter the date:");
	scanf("%d",&s2.date);
	printf("Enter the month:");
	scanf("%d",&s2.month);
	printf("Enter the year:");
	scanf("%d",&s2.year);
}