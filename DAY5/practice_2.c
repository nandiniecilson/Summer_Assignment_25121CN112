#include <stdio.h>

int main() {
    int num, originalNum, remainder, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        fact = 1;

        for (i = 1; i <= remainder; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        originalNum = originalNum / 10;
    }

    if (sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}