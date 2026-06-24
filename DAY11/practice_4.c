#include <stdio.h>
int findFactorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num ;
    printf("Enter a number:");
    scanf("%d", &num);
    int result = findFactorial(num);
    
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
