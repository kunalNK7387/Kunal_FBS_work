#include <stdio.h>
int main() {
    int arr[5], brr[5];
    int i, j;

    printf("Enter first array:\n");
    for(i = 0; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter second array:\n");
    for(i = 0; i < 5; i++) {
        printf("brr[%d]: ", i);
        scanf("%d", &brr[i]);
    }

    printf("Common elements are: ");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(arr[i] == brr[j]) {
                int duplicate = 0;
                for(int k = 0; k < i; k++) {
                    if(arr[i] == arr[k]) {
                        duplicate = 1;
                        break;
                    }
                }
                if(!duplicate) {
                    printf("%d ", arr[i]);
                }
                break; 
            }
        }
    }

    printf("\n");
    return 0;
}
