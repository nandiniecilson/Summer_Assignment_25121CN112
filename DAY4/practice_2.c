#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // For 0th term
    if (n == 0) {
        printf("Nth Fibonacci term is %d", first);
    }
    // For 1st term
    else if (n == 1) {
        printf("Nth Fibonacci term is %d", second);
    }
    else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        printf("Nth Fibonacci term is %d", second);
    }

    return 0;
}