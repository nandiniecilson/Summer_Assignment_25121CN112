#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, digits, result;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        digits = 0;
        result = 0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        // Calculate Armstrong sum
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits);
            originalNum /= 10;
        }

        // Check Armstrong number
        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}