void main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChoose an operation to perform:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    int temp, reverse = 0, sum = 0;

    if (choice == 1) {
        if (num % 2 == 0)
            printf("The number is Even.\n");
        else
            printf("The number is Odd.\n");
    }
    else if (choice == 2) {
        if (num <= 1) {
            printf("Not a Prime number.\n");
        } else {
            int isPrime = 1;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf("The number is Prime.\n");
            else
                printf("The number is Not Prime.\n");
        }
    }
    else if (choice == 3) {
        temp = num;
        while (temp != 0) {
            reverse = reverse * 10 + temp % 10;
            temp /= 10;
        }
        if (reverse == num)
            printf("The number is a Palindrome.\n");
        else
            printf("The number is Not a Palindrome.\n");
    }
    else if (choice == 4) {
        if (num > 0)
            printf("The number is Positive.\n");
        else if (num < 0)
            printf("The number is Negative.\n");
        else
            printf("The number is Zero.\n");
    }
    else if (choice == 5) {
        temp = num;
        reverse = 0;
        while (temp != 0) {
            reverse = reverse * 10 + temp % 10;
            temp /= 10;
        }
        printf("The reverse of the number is: %d\n", reverse);
    }
    else if (choice == 6) {
        temp = num;
        if (temp < 0) temp = -temp;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        printf("Sum of digits is: %d\n", sum);
    }
    else {
        printf("Invalid choice! Please select a number between 1 and 6.\n");
    }
}