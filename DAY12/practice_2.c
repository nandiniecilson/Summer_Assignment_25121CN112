#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

int isArmstrong(int num) {
    int originalNum, remainder, originalNumPower;
    int digits = 0;
    double sum = 0.0;

    originalNum = num;
    originalNumPower = num;
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }
    while (originalNumPower != 0) {
        remainder = originalNumPower % 10;
        sum += round(pow(remainder, digits));
        
        originalNumPower /= 10;
    }

    if ((int)sum == num) {
        return 1;
    } else {
        return 0;
    }
}
