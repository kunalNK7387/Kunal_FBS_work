#include<stdio.h>
void Armstrong(int* );
int p(int ,int);
int main() {
	int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    
	Armstrong(&n);
}
void Armstrong(int* n){

    

    printf("Armstrong numbers between 1 and %d are:\n", *n);

    for (int i = 1; i <= *n; i++) {
        int num = i;
        int sum = 0;
        int digits = 0;
        int temp = num;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while(temp > 0){
		int rem = temp % 10;
		sum = sum + pow(rem,digits);
		temp /=10;
	}
        if (sum == num) {
            printf("%d ", num);
        }
    }
}
int p(int base,int expo){
	int res=1;
	for (int i=expo;i!=0;--i){
		res=res*base;
	}
	return res;
}