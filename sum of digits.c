#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Make sure to handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Calculate sum of digits
    while (number > 0) {
        digit = number % 10;  // get the last digit
        sum += digit;         // add it to sum
        number /= 10;         // remove the last digit
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
