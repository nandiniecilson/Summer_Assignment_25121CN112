#include <stdio.h>
void moveZeroesToEnd(int arr[], int n) {
    int nonZeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroCount] = arr[i];
            nonZeroCount++;
        }
    }

    while (nonZeroCount < n) {
        arr[nonZeroCount] = 0;
        nonZeroCount++;
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    moveZeroesToEnd(arr, n);

    printf("Array after moving zeroes to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
