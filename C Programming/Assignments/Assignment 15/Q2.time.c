#include <stdio.h>
struct Time {
    int hrs;
    int min;
    int sec;
};

struct Time inputTime() {
    struct Time t;
    printf("Enter hours: ");
    scanf("%d", &t.hrs);
    printf("Enter minutes: ");
    scanf("%d", &t.min);
    printf("Enter seconds: ");
    scanf("%d", &t.sec);
    return t;
}

void displayTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

struct Time addTime(struct Time t1, struct Time t2) {
    struct Time result;

    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min + result.sec / 60;
    result.hrs = t1.hrs + t2.hrs + result.min / 60;

    result.sec %= 60;
    result.min %= 60;

    return result;
}
int convertToSeconds(struct Time t) {
    return t.hrs * 3600 + t.min * 60 + t.sec;
}

int main() {
    struct Time t1, t2, sum;

    printf("Enter first time:\n");
    t1 = inputTime();

    printf("\nEnter second time:\n");
    t2 = inputTime();

    printf("\nFirst Time: ");
    displayTime(t1);

    printf("Second Time: ");
    displayTime(t2);

    sum = addTime(t1, t2);
    printf("\nSum of Time: ");
    displayTime(sum);

    int totalSec1 = convertToSeconds(t1);
    int totalSec2 = convertToSeconds(t2);

    printf("\nFirst Time: %d seconds\n", totalSec1);
    printf("Second Time: %d seconds\n", totalSec2);

    return 0;
}
