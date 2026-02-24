#include <stdio.h>

int main() {
    int number, reverse = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number; // store original number for display

    // Handle negative numbers
    int isNegative = 0;
    if (number < 0) {
        isNegative = 1;
        number = -number;
    }

    // Reverse the number
    while (number > 0) {
        digit = number % 10;       // get the last digit
        reverse = reverse * 10 + digit; // append it to reverse
        number /= 10;              // remove the last digit
    }

    if (isNegative) {
        reverse = -reverse; // restore negative sign
    }

    printf("Reverse of %d is %d\n", originalNumber, reverse);

    return 0;
}