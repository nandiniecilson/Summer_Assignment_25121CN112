#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find factors and add them
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check perfect number
    if (sum == num)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}