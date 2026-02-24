#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for (num = 1; num <= 100; num++) {
        sum = 0;
        temp = num;

        // Calculate sum of cubes of digits
        while (temp > 0) {
            digit = temp % 10;         // get last digit
            sum += digit * digit * digit; // cube the digit and add
            temp /= 10;                // remove last digit
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}