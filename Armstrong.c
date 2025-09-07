#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    // Calculate the sum of the digits raised to the power n
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
