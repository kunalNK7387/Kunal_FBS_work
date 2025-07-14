#include<stdio.h>
#include <math.h>
int main() {
    int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (int i = 1; i <= n; i++) {
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