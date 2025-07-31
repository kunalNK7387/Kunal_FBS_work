#include <stdio.h>
void  main() {
    int arr[5], brr[5], crr[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter the array1 [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("||Second Array||\n");

    for(int i = 0; i < 5; i++) {
        printf("Enter the array2 [%d]: ", i);
        scanf("%d", &brr[i]);
    }
    for(int i = 0; i < 5; i++) {
        crr[i] = arr[i] + brr[i];
    }

    printf("sum of arr and brr:\n");
    for(int i = 0; i < 5; i++) {
        printf("[%d] ", crr[i]);
    }

}
