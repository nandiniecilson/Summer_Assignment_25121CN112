#include <stdio.h>
void findPairsWithSum(int arr[], int size, int targetSum) {
    int pairFound = 0;

    printf("\n--- Results ---\n");
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            // Check if the sum matches the target
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: (%d, %d) at indices [%d, %d]\n", arr[i], arr[j], i, j);
                pairFound = 1;
            }
        }
    }

    if (!pairFound) {
        printf("No pairs found with the sum %d.\n", targetSum);
    }
}

int main() {
    int size, targetSum;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size < 2) {
        printf("Invalid size. You need at least 2 elements to find a pair.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum to search for: ");
    scanf("%d", &targetSum);

    findPairsWithSum(arr, size, targetSum);

    return 0;
}
