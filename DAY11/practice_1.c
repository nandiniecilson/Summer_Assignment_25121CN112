#include <stdio.h>
int findSum(int num1, int num2);
int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int number1, number2, result;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    result = findSum(number1, number2);
    
    printf("The sum is: %d\n", result);
    return 0;
}


