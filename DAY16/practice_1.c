#include <stdio.h>
int main() {
    int n, i;
    int current_sum = 0;
    int expected_sum = 0;
    int missing_number = 0;

    printf("Enter the value of N (the range is 1 to N): ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Invalid input! N must be greater than 1.\n");
        return 1;
    }
    int arr[n - 1]; 

    printf("Enter %d distinct elements between 1 and %d:\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
     
        current_sum += arr[i];
    }
    expected_sum = (n * (n + 1)) / 2;

    missing_number = expected_sum - current_sum;
    printf("\nThe missing number is: %d\n", missing_number);

    return 0;
}
